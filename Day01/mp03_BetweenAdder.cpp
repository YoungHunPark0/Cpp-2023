// 선택제어문 : if, switch
// 반복제어문 : for, while
#include <iostream>

int main(void)
{
	int val1, val2;
	int res = 0;// res = result
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{   // for(초기식;조건식;증감식){}
		for (int i = val1 + 1; i < val2; i++)
			res += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			res += i;
	}
	std::cout << "두 수 사이의 정수 합: " << res << std::endl;
	return 0;
}
