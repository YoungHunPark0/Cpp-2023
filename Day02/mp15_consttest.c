#include <stdio.h>

int main()
{
	//int num = 10;
	//printf("num: %d\n", num); // %d �������·� ��� // 10

	//num = 20;
	//printf("num: %d\n", num);	// 20
	/*
	const int num = 20; // const int num = 10;
	printf("num: %d\n", num);
	// num = 20; const int num = 10; const�� num�� ���ȭ ��Ŵ - ���ȭ(����ȵ�)
	int* p = &num; // �ּҸ� ������ �� �ִ� �����ͺ���. & �ּҿ�����, * �����ͺ����� ������ ���� �����ض�
	printf("p�� ����� ��: %p\n", p); 
	printf("p�� �����ϴ� ��: %d\n", *p);// �ڵ�κ� * �� ��������������
	*p = 100; // �ڵ�κ� * �� ��������������. p�� ����Ű�� �ִºκ��� 20���� �����ض�
	printf("p�� ����Ű�� ���� �����Ͱ�: %d\n", *p);
	printf("num: %d\n", num);
	*/

	// �������
	const int num = 10;
	//num = 100; ���ȭ�� �ȵ�
	int* p = &num;
	*p = 100; // 100���� �������. const���� num(����)�� ���ȭ ���ѳ���, �����ͷ� �����ϸ� ������ ����.
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1; // �����Ͱ� ���ȭ. const�� �Ǿտ� ������ ������ ���ȭ!
	printf("���� �� pa: %p\n", pa);
	pa = &num2;
	printf("���� �� pa: %p\n", pa);

	// *pa = 50; �����Ͱ� ���ȭ�� �ּҰ� ��ü�� ������ �ȵ�
	
	int* const pb = &num1; // ������ ���� ���ȭ - ������ �ڿ� const
	// pb = &num2; 
	*pb = 70; // �����ͻ��ȭ�� �����Ͱ��� ���氡��


	return 0;
}