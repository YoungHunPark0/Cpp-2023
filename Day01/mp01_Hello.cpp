#include <iostream>

int main(void)	// �Լ��Ӹ�: ����� ������ void(��, �ƹ��͵�����)���� �ȵ� main()->��� �Լ��̸�(�Է�), ����(int),����(char, str)
{				// �Լ�����(�Լ� ��ü)
	int num = 20; // ���� ����. num�� �����? -> �������� - {}�ȿ� �����ؼ�. ������ �Ҹ��. 
	// int=4byte. 32bit. (ex 1byte = 8bit). ���ÿ� 4byteũ�� �Ҵ�. 
	// �޸𸮿� num�̶�� �̸����� ������. �̸������� �����ͽ����.
	std::cout << "Hello World!!" << std::endl; // std::cout<<"Hello " << "World!" << std::endl;
	std::cout << num << std::endl; // 20. endl(endline) = �����Ű�� ���
	std::cout << num << 'A';
	std::cout << "hi" << std::endl; // 20Ahi
	return 0;	// ����
}				// �Լ� ��

// = : ���Կ�����. ex 20 = num; �ɱ�?-> 20�� ���(�������ʴ°�)�̿��� ������ ���� x
// ���Կ����� = ���ʿ��� ���� ������ �� �ִ� ������ �;���, ������ ����(������ ����� ����)