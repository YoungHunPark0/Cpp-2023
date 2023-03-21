#include <iostream>

inline int SQUARE(int x) // 인라인함수 정의. inline 선언으로 SQUARE는 인라인함수가 됌
{
	return x * x;
}
int main()
{
	std::cout << SQUARE(5) << std::endl;	// SQUARE 함수를 호출. 인라인함수이니 몸체부분이 호출문 대채함
	std::cout << SQUARE(12) << std::endl;
	return 0;
}