// 함수 포인터
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[30]="aaa";
	int birthday=0;
public:
	Person(const char *aname, int b = 0) : birthday(b)
	{
		strcpy(name, aname);
	}
	void ShowPerson() const
	{
		cout << "이름: " << name << endl;
		cout << "생일: " << birthday << endl;
	}

};

int main()
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	return 0;
}