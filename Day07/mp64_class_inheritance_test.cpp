#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person { // ����̶�� Ŭ����
private:
	char name[30]; // ����� �̸�
	int age; // ����� ����
public:
	Person(const char* aname, int myage); //���Ǵ� �ܺο��� �غ���
	void getData(); // ���
};

class Student:public Person // publicŸ��(99%)���� �θ�Ÿ�� Ŭ������ ���!
{
private:
	int studentId; // ���θ��� �Ӽ��� ������ ����־�� �ϴ�, �����ڸ� ����!-> �θ�Ŭ�������� ������ ���
public:
	// ()�ȿ� �θ�Ŭ���� 3���� ���� �ʿ���
	Student(const char* aname, int myage, int myid);
	void ShowData(); // ��ӿ����� �������̵�=>������
// �������̵�:��Ӱ��迡�� Ŭ���� �̸��� ������ ���� �ٸ�
// �����ε�: ��Ӱ��谡 �ƴѵ� �Լ��̸��� ������=>��������

};

Person::Person(const char* aname, int myage) {
	age = myage;
	strcpy(name, aname);
}

void Person::getData()
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << age << endl;
}

Student::Student(const char* aname, int myage, int myid) :Person(aname, myage), studentId(myid){ }

void Student::ShowData()
{
	cout << "���̵�: " << studentId << endl;
}

int main()
{
	Person p("�ڿ���", 20);
	Student s("�ڿ���", 20, 1234);
	p.getData();
	s.ShowData();
	return 0;
}
// ũ��κ��� �θ�Ŭ������ ũ����
// �ڽ�Ŭ������ �����ü��� ���� Ư��(�Ӽ�)�� �ʿ����
// ������ �� �ִ� Ÿ���� �θ�Ŭ����Ÿ��
// �ڽ�Ŭ���� �������� �θ�Ŭ����Ÿ��(��ӹ�����) �޼ҵ尡 ����.
// �ڽ�Ŭ�������� ������ �޼ҵ尡 �ִµ� �̰� ���پȵ�
