// ��ũ�� �Լ�
#include <iostream>
#define SUM(x, y)	x + y // ��ũ���Լ�
#define SQLARE(x)	x * x
#define SQLARE1(x)	(x) * (x)
/*
int main()
{
	std::cout << SUM(10, 20) << std::endl;
	return 0;
}
*/
void func()
{

}
int main()
{	// ��ũ���Լ��� �ٸ��Լ�ó�� ������� ���� �ƴ�, �ڵ�ȿ��� �ٷν�����
	std::cout << SUM(10.1, 20.2) << std::endl; // 30.3. 10.1+20.2
	std::cout << SQLARE(10) << std::endl; // 100. 10*10
	std::cout << SQLARE(10 + 1) << std::endl; // 21. 10+1*10+1->10 +(1 * 10)+ 1 = 21. ��ũ���Լ� ���������� �ſ����
	std::cout << SQLARE1(10 + 1) << std::endl; // 121. (10+1) * (10+1) = 121

	return 0;
}