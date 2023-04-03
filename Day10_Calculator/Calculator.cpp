//author 박영훈
#include <iostream>
#include "Calculator.h" // Calculator.h 헤더파일 사용
using namespace std;
double Calculator::Calculate(double x, char cper, double y) // 클래스 Calculator에 함수 Calculate 정의
{
	if (cper == '+') {  // cper 변수값에 따라 연산을 하기위해서 if문 사용
		cout << "=" << x + y << endl; // 출력 x+y
		return x + y; // x+y값을 리턴함
	}
	else if (cper == '-') {
		cout << "=" << x - y << endl;
		return x - y; 
	}
	else if (cper == '*') {
		cout << "=" << x * y << endl;
		return x * y; 
	}
	else if (cper == '/') { // zero division 에러처리를 try, catch 사용함
		try // 예외처리
		{
			if (y == 0) throw y; //y가 0이면 y 에러처리
			cout << "=" << x / y << endl; // y가 0이 아니면 x/y 수행함

			return x / y; // 리턴값 x/y
		}
		catch (double exception)
		{
			cout << "더이상 나눌 수 없습니다.\n" << endl; // y에러처리한 것을 잡아서 출력
	
		}
	}
}

/*
Calculator::Calculator(int a, int b) : a1(a), b2(b) // 클래스 정의, 생성자 생성
{
}
void Calculator::Add() // add정의
{
	cout << a1 + b2 << endl;
}
void Calculator::Sub() // sub 정의
{
	cout << a1 - b2 << endl;
}
void Calculator::Mul()  // mul 정의
{
	cout << a1 * b2 << endl;
}
void Calculator::Div() // div 정의
{
	try // 예외처리
	{
		if (b2 == 0) throw b2;
		cout << float(a1) / float(b2) << endl;
	}
	catch (int exception) 
	{
		cout << "더이상 나눌 수 없습니다." << endl;
	}
}
*/