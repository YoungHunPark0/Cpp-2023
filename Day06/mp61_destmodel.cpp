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
// univstudent�� ����Ŭ������ personŬ������ �Ҹ��ڴ� �����ڿ��� �Ҵ��� �޸� ������ �����ϵ��� ������
		strcpy(name, myname);
	}
	~Person()
	{
		delete[]name;
// univstudent�� ����Ŭ������ personŬ������ �Ҹ��ڴ� �����ڿ��� �Ҵ��� �޸� ������ �����ϵ��� ������
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
// univstudent�� �Ҹ��ڿ����� �ڽ��� �����ڿ��� �Ҵ��� �޸𸮰����� ���� ������ å��. ����Ŭ������ �Ҹ��ڰ� ȣ��Ǹ鼭 ����Ŭ������ �����ڿ��� �Ҵ��� �޸𸮰����� �����ϱ� ����
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		delete[]major;
// univstudent�� �Ҹ��ڿ����� �ڽ��� �����ڿ��� �Ҵ��� �޸𸮰����� ���� ������ å��. ����Ŭ������ �Ҹ��ڰ� ȣ��Ǹ鼭 ����Ŭ������ �����ڿ��� �Ҵ��� �޸𸮰����� �����ϱ� ����
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