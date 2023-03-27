//shoallow copy : 얕은복사( 멤버 대 멤버 복사)
// 멤버변수가 힙의 메모리 공간을 참조하는 경우 문제가됨
//-> 나중에 해제할때 문제가 되기 때문
#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}