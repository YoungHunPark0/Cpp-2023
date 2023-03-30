// 함수 포인터
#include <iostream>

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int main()
{
	int res;
	//출력 함수이름(입력) 이 같아야함! fp=함수포인터
	int (*fp)(int, int); //함수 포인터 선언
	
	fp = add;
	res = fp(10, 20);
	printf("%d\n", res);

	fp = sub;
	res = fp(10, 10);
	printf("%d\n", res);

	printf("%p\n", add); // 주소값
	return 0;
}