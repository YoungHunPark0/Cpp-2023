//#include <iostream>
#include <stdio.h>
// c �Լ����й� : �Լ��̸�
// c++���� �Լ� ���й� : �Լ��̸�, �Ű������� Ÿ���̳� ����.      !! ����� �Ǻ� ������ �ƴ�
void func()
{
	//std::cout << "func()" << std::endl;
	printf("func()\n"); // �����Ű�°� \n
}
void func(int a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");
}
void func(char a)
{
	printf("func(a)\n");
}
int main()
{
	int n = 10, n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}