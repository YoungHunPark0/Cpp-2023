#include <iostream>
/* DefaultValue.cpp
int func(int a = 10, int b = 20)
{
	return a + b;
}

int main()
{
	func();
	func(5);
	func(5, 10);
	//std::cout << Adder() << std::endl;
	//std::cout << Adder(5) << std::endl;
	//std::cout << Adder(3, 5) << std::endl;

	return 0;
}
*/
/* DefaultValue2.cpp
// 함수선언
int Adder(int num1=1, int num2=2);

int main()
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}
// 함수정의
int Adder(int num1, int num2)
{
	return num1 + num2;
}
*/
// DefaultValue3.cpp
int BoxVolume(int length, int width = 1, int height = 1); // 첫번째 매개변수에는 디폴트값 지정안됨->BoxVolume함수 호출 시 반드시 하나 이상 인자전달.

int main()
{
	std::cout << "[3,3,3]: " << BoxVolume(3, 3, 3) << std::endl; // 전달되는 인자는 왼쪽에서부터 채워지고 부족한 부분은 디폴트값이 대신 전달됨.
	std::cout << "[5,5,D]: " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]: " << BoxVolume(7) << std::endl;
//	std::cout << "[D,D,D]: " << BoxVolume() << std::endl; 
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}