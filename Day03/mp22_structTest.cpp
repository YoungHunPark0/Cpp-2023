// ����� ���� �ڷ����� ����ü : C
#include <stdio.h>

struct human // ����ü �̸��� �޸�
{
	char name[20];
	int age;
};

int main()
{
	// char h;
	struct human h = { "ȫ�浿", 23 }; // ����ühuman Ÿ���� ����ü����h ����!. �ʱⰪ�� �����ٶ��� �߰�ȣ{}���
	
	printf("�̸�: %s\n", h.name); // h��� ����ü������ �ִ� name�� ����
	printf("����: %d\n", h.age);
	return 0;
}
// ����ü ����, �����������, �����ϴ¹��