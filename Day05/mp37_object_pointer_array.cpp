//��ü ������ �迭
//ObjPtrArr
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//�迭������ = ������
//�����͹迭 = �迭
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // ������
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person() // �迭 ������ �ʿ��� �����ڸ� �߰�!
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) // ���ϴ� �����ͷ��� �ʱ�ȭ�� �������� ���ǵ� �Լ�
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << ", ";
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person* parr[3]; // ������ �迭(==�迭) ����. �迭�����ε� *������ ���� ���
	// ��ü�ּҰ� 3���� ������ �� �ִ� �迭. �����濡�� ��ü �����Ͱ� ����Ǿ����
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸�: ";
		cin >> namestr;
		cout << "����: ";
		cin >> age; // cin���ٰ� �̸�,���� ����
		parr[i] = new Person(namestr, age); // ��ü�� ����, ��ü �ּҰ��� �迭�� ����
	}

	parr[0]->ShowPersonInfo();// ��ü�����ͷ� �޼ҵ忡 �����Ҷ��� ' -> ��� '
	parr[1]->ShowPersonInfo();// ��ü�� �޼ҵ忡 �����Ҷ��� ���������� ' . ���'
	parr[2]->ShowPersonInfo();
	delete parr[0]; // �� 3ȸ�� ���ļ� new���� ����������, ��3ȸ�� ���� delete���� ����
	delete parr[1];
	delete parr[2];

	return 0;
}