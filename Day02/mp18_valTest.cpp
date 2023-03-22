#include <stdio.h>

int main()
{	/*
	int num = 10;	// 변수 초기화
	int num1;		// 변수 선언
	num1 = 20;		// 대입, = 대입연산자
	num = 30;
	printf("int 크기: %d\n", sizeof(int)); // 정수 4byte

	char ch;		// 문자타입 변수 ch // 메모리에 저장할 수 있는 공간을 할당받음
	printf("ch 크기 : %d\n", sizeof(char)); // 문자 1byte

	double d = 3.14; // 실수타입 변수
	printf("double 크기: %d\n", sizeof(double)); // 실수 8byte
	*/

	char ch = 0x7f; // 1*** **** 2진수에서 1에 해당하는 값은 부호 결정에 해당한다.\
   1이면 음수, 0이면 양수로 인식하기때문에 출력 시 -가 나옴\
   하지만, unsigned를 쓰면 부호가 항상 양수이므로\
   정상적으로 나온다. 또 128이상의 숫자를 쓰고 싶을때, unsigned 사용\
   왜, 128이상이면 부호비트때문에 값이 음수로 나와용.
	// 16진법(앞에 0x 붙이면됨)->%x, 계산기 HEX : ex) 0~9,A(10),B(11),C(12),D(13),E(14),F(15)
	// 2진법 0b: ex) 0111 1111-> 8bit(0또는 1)
	unsigned char ch1 = 0x7f; // unsigned는 0과 양수만 가능 0~255// unsigned 있어서 signed 생략
	printf("ch: %x \t ch: %d\n", ch, ch);
	printf("ch1: %x \t ch1: %d\n", ch1, ch1);
	
	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f; // 0b(2진법) 1001 1111
	printf("ch2: %x \t ch: %d\n", ch2, ch2);
	printf("uch2: %x \t ch1: %d\n", uch2, uch2);
						// 0b(2진법) 1001 1111 << 1 : 0b 1 0011 1110
	uch2 = uch2 << 1;	// << 비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x \t ch2 << 1: %x\n", uch2, ch2);
	
	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >> 1: %x\n", uch2, ch2); // 우측으로 이동시키면 최상위비트 1 남음.

	return 0;
}