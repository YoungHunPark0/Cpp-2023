//author 박영훈
#include "Calculator.h"
#include <iostream>
using namespace std;

int main()
{
	double x;
	char cper;
	double y;

	Calculator cal; // 클래스 Calculator에 객체 cal을 선언함
	printf("Calculator Console Application\n");
	printf("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b Press \"ctrl + c\" to exit the program\n");
	while (true) { // 참이면 반복수행
		cout << "input >> " << endl; // 참이면 input>> 반복출력
		cin >> x >> cper >> y; // cin으로 x, cper, y값 받음
		cal.Calculate(x, cper, y); // x,cper,y에 입력받은 값을 calculator클래스 멤버함수인 calculate에 전달함
	}
	
	return 0;
}