// �Ҹ���
// ��� �ν��Ͻ� ������. �ذ���: #define _CRT_SECURE_NO_WARNINGS ��� �߰�, const char* myname char�� ���ȭ ������
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // const ���ȭ
	{
		int len = strlen(myname) + 1; // ���ʿ��� �޸� ���� ����, ������ �������� ���ڿ� ���̸�ŭ �޸𸮰����� �����Ҵ��ϰ� ����
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() // �Ҹ���
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}