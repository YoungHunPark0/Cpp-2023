#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl; // 35행 AAA obj1; 객체생성시 실제로 생성자가 호출되었는지 확인하기 위한 출력문
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref; // 참조자가 멤버변수로 선언됨. 따라서 이니셜라이저를 통해 초기화를 해야함
	const int& num; // const 참조자가 선언됨. 따라서 이니셜라이저를 통해 정수형 상수로도 초기화가 가능함

public:
	BBB(AAA&r, const int &n):ref(r), num(n){/*empty constructor body*/}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}