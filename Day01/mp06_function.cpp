#include <iostream>
/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;

	return 0;
}
*/
/*
1. �Է�, ����� ���� �Լ��� ���弼��.   ��� �Լ��̸�(�Է�) �ݵ�� �˾Ƶα�
void func(void)  //�Է��� ���ٴ� �� : void // func -> function ����
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;
	// ����� ���ٴ°� return�� ���ٴ� ��.
}
int main()
{

	func(); // �Լ�ȣ��
	return 0;
}
*/
/* 
2. �Է��� �ְ�, ����� ���� �Լ� �����. �Է��� ����� ��� : �Ű������� ���� 
ex) ���x->void �Լ��̸�(�Է�)
void func(int n1, int n2)
{
	int res = n1 + n2; // ������ ����ҷ��� ������ �ؾߵ�. int ���̱�
	std::cout << "res: " << res << std::endl;
}
int main()
{
	int num1 = 10;
	int num2 = 20;	
	func(num1, num2);	// �Է����� �������ִ� ���� ���μ���� ��.-> num1, num2
}
*/
/*3. �Է�, ����� �ִ� �Լ� �����.
int func(int n1, int n2)
{
	int res = n1 + n2; // ������ ����ҷ��� ������ �ؾߵ�. int ���̱�
	return res; // ����� return������ �ۼ��Ѵ�
}
int main() // ���α׷� ����� ������� 
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2);// ���ϵǴ� ���� �����ؼ� ����Ѵ�.
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << func(num1, num2) << std::endl; // ���⼭ func(num1, num2)�� �ӽð�ü 

	return 0;
}
*/
// main()�� ���� ����.
int func(int n1, int n2); // �Լ�����

int main() // �Լ�ȣ��. ���α׷� ����� ������� 
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2);// ���ϵǴ� ���� �����ؼ� ����Ѵ�.
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << func(num1, num2) << std::endl; // ���⼭ func(num1, num2)�� �ӽð�ü 
}
int func(int n1, int n2) // �Լ� ����
{
	int res = n1 + n2; // ������ ����ҷ��� ������ �ؾߵ�. int ���̱�
	return res; // ����� return������ �ۼ��Ѵ�
}
