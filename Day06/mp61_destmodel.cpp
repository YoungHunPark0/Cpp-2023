#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
public:
	Person(const char* myname)
	{
		name = new char[strlen(myname) + 1]; 
// univstudent의 기초클래스인 person클래스의 소멸자는 생성자에서 할당한 메모리 공간을 해제하도록 정의함
		strcpy(name, myname);
	}
	~Person()
	{
		delete[]name;
// univstudent의 기초클래스인 person클래스의 소멸자는 생성자에서 할당한 메모리 공간을 해제하도록 정의함
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char* major;
public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
// univstudent의 소멸자에서도 자신의 생성자에서 할당한 메모리공간에 대한 해제만 책임. 기초클래스의 소멸자가 호출되면서 기초클래스의 생성자에서 할당한 메모리공간을 해제하기 때문
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		delete[]major;
// univstudent의 소멸자에서도 자신의 생성자에서 할당한 메모리공간에 대한 해제만 책임. 기초클래스의 소멸자가 호출되면서 기초클래스의 생성자에서 할당한 메모리공간을 해제하기 때문
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}