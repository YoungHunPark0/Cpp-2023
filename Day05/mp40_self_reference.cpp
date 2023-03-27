#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "객체생성" << endl;
	}
	SelfRef& Adder(int n) // 반환내용 *this, 객체자신포인터가 아닌, 객체자신을 반환하겠다는 의미가 됨
		// 그런데, 반환형이 참조형 SelfRef& 으로 선언됨. 따라서 객체자신을 참조할 수 있는
		// '참조의 정보(이하 참조값)'가 반환됨
	{
		num += n;
		return *this;
	}
	SelfRef& ShowTwoNumber() // 객체 자신을 참조할 수 있는 참조값을 반환하도록 정의
	{
		cout << num << endl;
		return *this;
	}
};

int main()
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2); // 객체 obj의 adder함수 호출. adder함수는 객체자신의 참조값을 반환
	// 즉 객체 obj 참조값을 반환. 따라서 참조자 ref는 객체 obj를 참조함
	
	obj.ShowTwoNumber(); // 30행에서 일어나는 일 확인하기위해, 객체에 저장되어 있는 값 출력
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); 
	// 먼저 객체ref의 함수Adder 호출. adder은 참조값 반환하므로, 
	//반환참조값을 다시 showtwonumber함수로 호출. 마찬가지로 반환된 참조값을 이용해서 adder호출
	// 이어서 showtwonumber함수 호출. 두함수가 객체의 참조값을 반환하기 때문에 구성이 가능함
	return 0;
}