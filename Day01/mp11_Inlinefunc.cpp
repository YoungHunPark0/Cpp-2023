#include <iostream>

inline int SQUARE(int x) // �ζ����Լ� ����. inline �������� SQUARE�� �ζ����Լ��� ��
{
	return x * x;
}
int main()
{
	std::cout << SQUARE(5) << std::endl;	// SQUARE �Լ��� ȣ��. �ζ����Լ��̴� ��ü�κ��� ȣ�⹮ ��ä��
	std::cout << SQUARE(12) << std::endl;
	return 0;
}