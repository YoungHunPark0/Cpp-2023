#include <iostream>
/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;

	return 0;
}
*/
/*
1. 입력, 출력이 없는 함수를 만드세요.   출력 함수이름(입력) 반드시 알아두기
void func(void)  //입력이 없다는 것 : void // func -> function 줄임
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;
	// 출력이 없다는건 return이 없다는 뜻.
}
int main()
{

	func(); // 함수호출
	return 0;
}
*/
/* 
2. 입력은 있고, 출력은 없는 함수 만들기. 입력을 만드는 방법 : 매개변수를 선언 
ex) 출력x->void 함수이름(입력)
void func(int n1, int n2)
{
	int res = n1 + n2; // 변수를 사용할려면 선언을 해야됨. int 붙이기
	std::cout << "res: " << res << std::endl;
}
int main()
{
	int num1 = 10;
	int num2 = 20;	
	func(num1, num2);	// 입력으로 전달해주는 것을 실인수라고 함.-> num1, num2
}
*/
/*3. 입력, 출력이 있는 함수 만들기.
int func(int n1, int n2)
{
	int res = n1 + n2; // 변수를 사용할려면 선언을 해야됨. int 붙이기
	return res; // 출력은 return문으로 작성한다
}
int main() // 프로그램 실행시 가장먼저 
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2);// 리턴되는 값을 저장해서 사용한다.
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << func(num1, num2) << std::endl; // 여기서 func(num1, num2)는 임시객체 

	return 0;
}
*/
// main()을 위에 쓸때.
int func(int n1, int n2); // 함수선언

int main() // 함수호출. 프로그램 실행시 가장먼저 
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2);// 리턴되는 값을 저장해서 사용한다.
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << func(num1, num2) << std::endl; // 여기서 func(num1, num2)는 임시객체 
}
int func(int n1, int n2) // 함수 정의
{
	int res = n1 + n2; // 변수를 사용할려면 선언을 해야됨. int 붙이기
	return res; // 출력은 return문으로 작성한다
}
