#include <iostream>

int g = 0;			// ��������
void func()
{
	printf("func() : %p\n", func);
}
int main()
{
	int n = 10;		// main�Լ��ȿ� �����ִ� ��������
	static int c;
	const int d = 10; // �������� - stack�� ����
	char ary[10] = "hi"; // �������� �迭 - stack ����

	func();						  // 00007FF6113D13CF
	printf("local n : %p\n", &n); // 000000E6F25AF634
	printf("global g: %p\n", &g); // 00007FF6113DC170
	printf("static c : %p\n", &c);// 00007FF6113DC174
	printf("const d : %p\n", &d); // 000000E6F25AF654
	printf("array : %p\n", ary);  // 000000E6F25AF678

	return 0;
}
/*
�޸𸮿����� ũ�Գ�����
1. �ڵ弼�׸�Ʈ 
- printf()
- func()
- main()
2. �����ͼ��׸�Ʈ
���������� 
- stack - [int] [x] [10]
- ��
���������� 
- printf("static c : %p\n", &c)
- ex) printf("func() : %p\n", func). printf("���ڿ�") �ΰ͵� 
- ���, ���α׷� ���ۺ��� ���������� �ִ°͵�
*/