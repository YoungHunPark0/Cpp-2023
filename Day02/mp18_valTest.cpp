#include <stdio.h>

int main()
{	/*
	int num = 10;	// ���� �ʱ�ȭ
	int num1;		// ���� ����
	num1 = 20;		// ����, = ���Կ�����
	num = 30;
	printf("int ũ��: %d\n", sizeof(int)); // ���� 4byte

	char ch;		// ����Ÿ�� ���� ch // �޸𸮿� ������ �� �ִ� ������ �Ҵ����
	printf("ch ũ�� : %d\n", sizeof(char)); // ���� 1byte

	double d = 3.14; // �Ǽ�Ÿ�� ����
	printf("double ũ��: %d\n", sizeof(double)); // �Ǽ� 8byte
	*/

	char ch = 0x7f; // 1*** **** 2�������� 1�� �ش��ϴ� ���� ��ȣ ������ �ش��Ѵ�.\
   1�̸� ����, 0�̸� ����� �ν��ϱ⶧���� ��� �� -�� ����\
   ������, unsigned�� ���� ��ȣ�� �׻� ����̹Ƿ�\
   ���������� ���´�. �� 128�̻��� ���ڸ� ���� ������, unsigned ���\
   ��, 128�̻��̸� ��ȣ��Ʈ������ ���� ������ ���Ϳ�.
	// 16����(�տ� 0x ���̸��)->%x, ���� HEX : ex) 0~9,A(10),B(11),C(12),D(13),E(14),F(15)
	// 2���� 0b: ex) 0111 1111-> 8bit(0�Ǵ� 1)
	unsigned char ch1 = 0x7f; // unsigned�� 0�� ����� ���� 0~255// unsigned �־ signed ����
	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch1: %d\n", ch1, ch1);
	
	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f; // 0b(2����) 1001 1111
	printf("ch2: %x \t ch: %d\n", ch2, ch2);
	printf("uch2: %x \t ch1: %d\n", uch2, uch2);
						// 0b(2����) 1001 1111 << 1 : 0b 1 0011 1110
	uch2 = uch2 << 1;	// << ��Ʈ������. uch2�� �������� 1bit��ŭ �̵���Ų��.
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x \t ch2 << 1: %x\n", uch2, ch2);
	
	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >> 1: %x\n", uch2, ch2); // �������� �̵���Ű�� �ֻ�����Ʈ 1 ����.

	return 0;
}