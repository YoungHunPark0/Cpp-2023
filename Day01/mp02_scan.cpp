// 덧셈 결과 출력
#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1; // cin이라는 객채의 값을 val1이라는 변수에 집어넣어라. >> 뒤에 변수에 입력해라.

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}