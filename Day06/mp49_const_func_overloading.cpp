/*
함수의 오버로딩이 성립하려면 매개변수의 수나 자료형이 달라야함.
const 선언유무도 함수 오버로딩의 조건에 해당됨
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main()
{
	SoSimple obj1(2);		// 일반객체와 const객체를 각각 생성
	const SoSimple obj2(7); // 일반객체와 const객체를 각각 생성

	obj1.SimpleFunc(); // 일반객체대상-Simplefunc함수호출-void SimpleFunc()의 일반멤버함수
	obj2.SimpleFunc(); // const객체대상-Simplefunc함수호출-void SimpleFunc()의 const멤버함수

	YourFunc(obj1); //void YourFunc(const SoSimple& obj)에 정의된 yourfunc함수는 전달되는 인자를 참조자로
	YourFunc(obj2); // const참조자로 받는다. 참조자를 이용한 obj.simplefunc()의 함수호출 결과로 
	return 0;       // void SimpleFunc()의 const멤버함수 호출
}