#include <iostream>
/* DefaultValue.cpp
int func(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	func();
	func(5);
	func(5, 10);
	//std::cout << Adder() << std::endl;
	//std::cout << Adder(5) << std::endl;
	//std::cout << Adder(3, 5) << std::endl;

	return 0;
}
*/
/* DefaultValue2.cpp
// �Լ�����
int Adder(int num1=1, int num2=2);

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}
// �Լ�����
int Adder(int num1, int num2)
{
	return num1 + num2;
}
*/
// DefaultValue3.cpp
int BoxVolume(int length, int width = 1, int height = 1); // ù��° �Ű��������� ����Ʈ�� �����ȵ�->BoxVolume�Լ� ȣ�� �� �ݵ�� �ϳ� �̻� ��������.

int main()
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl; // ���޵Ǵ� ���ڴ� ���ʿ������� ä������ ������ �κ��� ����Ʈ���� ��� ���޵�.
	std::cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]: " << BoxVolume(7) << std::endl;
//	std::cout << "[D,D,D]: " << BoxVolume() << std::endl; 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}