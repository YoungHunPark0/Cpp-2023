//this 포인터는 객체 자기자신을 가르킨다.
// num1(멤버변수) = num1(매개변수); 이미 객체포인터를 가지고는 지역변수에 접근안됨
// this를 사용하면 가능함!
#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1; // this->num1, this->num2는 멤버변수. num1, nu2는 매개변수 의미
		this->num2 = num2; // 매개변수 num1,num2를 통해 전달된 값이 멤버변수 num1,num2에 저장됨
	}
	/*
	TwoNumber(int num1, num2)
		: num1(num1), num2(num2) // 멤버 이니셜라이저에서는 this 포인터 사용할 수 없음
	{
		// empty
	}
	*/
	void ShowTwoNumber()
	{
		cout << this->num1 << endl; // this포인터 사용함으로써, 멤버변수에 접근함을 명확히함
		cout << this->num2 << endl; // 일반적으로는 this포인터 생략해서 표현함
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}
// 객체를 생성하면 객체별로 멤버변수가 할당. 메소드는 x, 
// 메소드는 코드내 공유하기때문에 구분을 시켜줘야함->this포인터를 통해 객체 주소값을 통해 호출
// 멤버함수에 저장된 상태를 this 포인터를 통해서 호출가능
