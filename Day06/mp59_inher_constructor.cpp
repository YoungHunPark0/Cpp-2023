// 생성자 호출
#include <iostream>
using namespace std;

class Super
{
public:
	Super()
	{	cout << "Super()" << endl;	}
	~Super()
	{	cout << "~Super()" << endl;	}
};

class Sub : public Super //sub는 super클래스 상속받음
{
public:
	Sub()
	{	cout << "Sub()" << endl;}
	~Sub()
	{	cout << "~Sub()" << endl;}
};

int main()
{
	cout << "Start" << endl; 
	Sub obj; //서브클래스 타입의 객채생성. 객채생성을 위해 생성자 호출할거임
	cout << "Stop" << endl;

	return 0;
}
// 호출은 자식클래스의 객체
// 자식클래스의 객체가 먼저 죽고 부모클래스의 객체가 죽음
// 늦게 들어간 것이 빨리나옴