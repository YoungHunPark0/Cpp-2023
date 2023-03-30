// 가상 소멸자(virtual destructor)
#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n):num(n) {
		num = n;
		cout << num << "CTest constructor" << endl;
	}
	virtual~CTest() {
		cout << "CTest destuctor" << endl;
	}
	void func() {
		cout << "CTest func" << endl;
	}
	virtual void vfunc() { // 가상함수 (슈퍼클래스) // 자식클래스의 가상함수를 쓸거라 virtual 선언해놓음
			// virtual 선언해놓으면 runtime에서 선언되는 함수로 결정됨
		cout << "CTest vfunc" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int snum;
public:
	CTestSub(int n1, int n2) :CTest(n1), snum(n2)
	{
		cout << snum << "CTestSub constructor" << endl;
	}
	~CTestSub() {
		cout << "CTestSub destructor" << endl;
	}
	void vfunc() { // 서브클래스 가상함수 오버라이딩
		cout << "CTestSub func()" << endl;
	}
};
int main()
{/*
	CTest c1(10);
	cout << "====================" << endl;
	CTestSub c2(1, 10);
	// 여기까진 문제 x
	// 문제발생시켜봄 상위클래스로 하위클래스를 참조시킴
	cout << "====================" << endl;
	*/
	CTest* ps = new CTestSub(3, 33); // 상위클래스의 객체포인터로 하위클래스 객체를 호출
	// 혼자실행시키면 3CTest constructor / 33CTestSub constructor
	delete ps;
	/* delete를 통해 슈퍼클래스 소멸자 호출했지만 서브클래스 소멸자는 호출안돼는 문제 발생
	* -> 가상소멸자를 생성하면 문제해결! 슈퍼클래스 소멸자에 virtual 추가
	3CTest constructor
	33CTestSub constructor
	CTest destuctor
	----- 슈퍼클래스 소멸자 가상소멸자로 변환-> 슈퍼클래스 소멸자 호출됨
	3CTest constructor
	33CTestSub constructor
	CTestSub destructor
	CTest destuctor
	*/
	return 0;
}