#include <iostream>
using namespace std;

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };
	printf("ary ��üũ��: %d\n", sizeof(ary));
	int* pary = ary;

	printf("ary �ּ�: %p\n", ary); // �迭�ּҴ� �迭 ù��°��(�����ּ�)�� ����/ 000000366C2FFC78
	printf("ary[0] �ּ�: %p\n", &ary[0]); // 0������ �ּҸ� �о�÷��� & �ּҿ����� ����ؾߵ�/ 000000366C2FFC78
	printf("ary + 1: %p\n", ary + 1); // ary��� �����Ϳ��� �����Ϳ��꿡 +1�ϸ� -> 4byte ����/ 0000008E753BF5EC
	printf("ary[1] �ּ�: %p\n", &ary[1]); // �ּҰ� 0000008E753BF5EC
	
	printf("pary �ּ�: %p\n", &pary); // 0000009FEDFCFBF8
	printf("pary ��: %p\n", pary); // 0000009FEDFCFBC8
	printf("pary[0] �ּ�: %p\n", &pary[0]); // 000000AEF20FFA68
	printf("pary[0] ��: %d\n", pary[0]); // 1
	printf("pary[0] ��: %d\n", *pary); // 1, *��������
	printf("pary[0] ��: %d\n", *(pary+1)); // 2


	return 0;
}