// ���� ������
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char *name): num(n){// �ݷ��ʱ�ȭ
		std::cout << "������ ȣ��" << std::endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	} 
	explicit Myclass(Myclass& other) { //&��������, other �ٸ���ü����
		std::cout << "��������� ȣ��" << std::endl;
		//this->name = other.name;
		this->name = new char(strlen(other.name) + 1);
		strcpy(this->name, other.name); // ��������
		this->num = other.num;
	}
	void getData() {
		std::cout << num << std::endl;
	}
	~Myclass() {
		std::cout << "�޸� ����" << std::endl;
		delete[] this->name;
	}
};
/*
int main()
{	
	Myclass m1(1, "ȫ�浿");		// ������ ȣ��
	//Myclass m2 = m1;	// ��������� ȣ��. int���� num2�� ����. int num2 = num1�� ���� ����־��
	Myclass m3(m1);		// ��������� ȣ��. 
	// ����������� �Ű������� ��������. ��üŸ���̿��� ���ѷ�����������

	m1.getData();
	//m2.getData();
	m3.getData();

	return 0;
}
*/
int func(int n)
{
	std::cout << "�Լ�ȣ��" << std::endl;
	return n + 1;
}
int main()
{
	int num = 10;
	int res;
	res = func(num);

	return 0;
}