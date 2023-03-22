// ���� ���� ȣ��(Call-by-value), ������ ���� ȣ��(Call-by-reference)
#include <iostream>

/* 1��°
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("���� �� n1: %d \t n2: %d\n", n1, n2); //  n1: 10   n2: 20
	int temp = n1;
	n1 = n2;
	n2 = n1;
	n2 = temp;

	printf("���� �� n1: %d \t n2: %d\n", n1, n2); //  n1: 20   n2: 10

	return 0;
}
*/
/* 2��° �Լ� ����
void swap(int n1, int n2) // n1 n2�� ���� �ٲٴ� �Լ��� ��������
{
	int temp; // temp��� ������ �����������. ������ϸ� �ٲﰪ�� �ƴ� �������� ����
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1: %d \t n2: %d\n", n1, n2);
}
int main()
{
	int n1 = 10, n2 = 20;
	
	printf("ȣ�� �� n1: %d \t n2: %d\n", n1, n2);
	swap(n1, n2);
	printf("ȣ�� �� n1: %d \t n2: %d\n", n1, n2);

	return 0;
}
*/
// 3��° �����ͷ� ���� : call by reference ������ ���� ȣ��
void swap(int* pn1, int* pn2) // main���� swap�� �ּҿ����� ��������� �����Ϳ����� *�� �ٲ������
{
	int temp; // temp��� ������ �����������. ������ϸ� �ٲﰪ�� �ƴ� �������� ����
	temp = *pn1; // �����Ͱ��� temp�� ����־��
	*pn1 = *pn2;
	*pn2 = temp;
	//printf("n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("ȣ�� �� n1: %d \t n2: %d\n", n1, n2);
	swap(&n1, &n2);
	printf("ȣ�� �� n1: %d \t n2: %d\n", n1, n2);

	return 0;
}