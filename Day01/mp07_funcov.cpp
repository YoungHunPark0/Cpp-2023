//#include <iostream>
#include <stdio.h>
// c 함수구분법 : 함수이름
// c++에서 함수 구분법 : 함수이름, 매개변수의 타입이나 갯수.      !! 출력은 판별 기준이 아님
void func()
{
	//std::cout << "func()" << std::endl;
	printf("func()\n"); // 대행시키는거 \n
}
void func(int a)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	//std::cout << "func(a)" << std::endl;
	printf("func(a, b)\n");
}
void func(char a)
{
	printf("func(a)\n");
}
int main()
{
	int n = 10, n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}