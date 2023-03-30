// 소멸자 destructor
#include <iostream>
using namespace std;

class CTest // class_test
{
private:
	int num;
public:
	CTest(int n) { // 생성자
		num = n;
		cout << num << "CTest Constructor" << endl;
	}
	~CTest() { // 슈퍼클래스 소멸자
		cout << "CTest Destructor" << endl;
	}
};
class CTestSub :public CTest {
private:
	int subn;
public: // 자식클래스는 속성이나 특징이 부모보다 많아야함
	CTestSub(int sn, int n) : CTest(sn){ // 자식클래스 생성자 :(멤버이니셜라이저) 슈퍼클래스(자식속성) 초기화함! 
		subn = n;
		cout << subn << "CTestSub Constructor" << endl;
	}
	~CTestSub() { // 서브클래스 소멸자
		cout << "CTestSub Destructor" << endl;
	}
};
int main()
{
	CTest c1(10);
	cout << "==============" << endl;
	CTestSub c2(1, 10); // c2(부모속성, 자식속성)

	return 0;
}
/*
10CTest Constructor
==============
1CTest Constructor
10CTestSub Constructor
CTestSub Destructor
CTest Destructor
CTest Destructor
*/