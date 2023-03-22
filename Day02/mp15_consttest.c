#include <stdio.h>

int main()
{
	//int num = 10;
	//printf("num: %d\n", num); // %d 정수형태로 출력 // 10

	//num = 20;
	//printf("num: %d\n", num);	// 20
	/*
	const int num = 20; // const int num = 10;
	printf("num: %d\n", num);
	// num = 20; const int num = 10; const가 num을 상수화 시킴 - 상수화(변경안됨)
	int* p = &num; // 주소를 저장할 수 있는 포인터변수. & 주소연산자, * 포인터변수에 있으면 값을 참조해라
	printf("p에 저장된 값: %p\n", p); 
	printf("p가 참조하는 값: %d\n", *p);// 코드부분 * 는 간접참조연산자
	*p = 100; // 코드부분 * 는 간접참조연산자. p가 가르키고 있는부분을 20으로 변경해라
	printf("p가 가르키는 곳의 데이터값: %d\n", *p);
	printf("num: %d\n", num);
	*/

	// 상수형태
	const int num = 10;
	//num = 100; 상수화로 안됨
	int* p = &num;
	*p = 100; // 100으로 값변경됨. const으로 num(변수)를 상수화 시켜놔도, 포인터로 접근하면 값변경 가능.
	printf("num: %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1; // 데이터값 상수화. const가 맨앞에 붙으면 데이터 상수화!
	printf("변경 전 pa: %p\n", pa);
	pa = &num2;
	printf("변경 후 pa: %p\n", pa);

	// *pa = 50; 데이터값 상수화로 주소값 자체가 변경이 안됨
	
	int* const pb = &num1; // 포인터 변수 상수화 - 포인터 뒤에 const
	// pb = &num2; 
	*pb = 70; // 포인터상수화는 데이터값은 변경가능


	return 0;
}