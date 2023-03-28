// 상속관련 완전한 예제의 확인 및 실행
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50]; // 선언한다음 배열을 저장하기 위해 strcpy 사용
public:
	Person(int myage, const char* myname) :age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50]; // 전공과목
public:
	UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname)
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName(); // 서브클래스 생성자
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();

	return 0;
}