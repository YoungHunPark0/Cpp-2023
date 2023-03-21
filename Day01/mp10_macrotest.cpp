// 매크로 함수
#include <iostream>
#define SUM(x, y)	x + y // 매크로함수
#define SQLARE(x)	x * x
#define SQLARE1(x)	(x) * (x)
/*
int main()
{
	std::cout << SUM(10, 20) << std::endl;
	return 0;
}
*/
void func()
{

}
int main()
{	// 매크로함수는 다른함수처럼 끌어오는 것이 아닌, 코드안에서 바로실행함
	std::cout << SUM(10.1, 20.2) << std::endl; // 30.3. 10.1+20.2
	std::cout << SQLARE(10) << std::endl; // 100. 10*10
	std::cout << SQLARE(10 + 1) << std::endl; // 21. 10+1*10+1->10 +(1 * 10)+ 1 = 21. 매크로함수 단점이지만 매우빠름
	std::cout << SQLARE1(10 + 1) << std::endl; // 121. (10+1) * (10+1) = 121

	return 0;
}