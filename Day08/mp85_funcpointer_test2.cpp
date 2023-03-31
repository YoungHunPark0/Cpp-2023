// �Լ� ������

// 1. ������ �����ϱ�
// 2. �����Ҵ��ϱ�
// 3. ��������� �����

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int birthday;
public:
	Person(const char *aname, int birth) : birthday(birth)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
	}

	void ShowPerson() const
	{
		cout << name << ", " <<birthday<< endl;
	}
	
	Person(Person& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		//name = other.name;
		birthday = other.birthday;
	}
	Person& operator=(const Person& other) {
		delete[]name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		//this->name = other.name;
		this->birthday = other.birthday;
		return *this;
	}
	~Person()
	{
		delete[]name;
		cout << "delete" << endl;
	}
};

int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3= p2;
	p3.ShowPerson();

	Person p4("������", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}