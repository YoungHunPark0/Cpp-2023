//author 박영훈
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator // Calculator 클래스선언
{
private:
	double x;
	char cper;
	double y;

public:
	/* 참고
	int a1;
	int b2;
	Calculator(int a, int b);
	void Add();
	void Sub();
	void Mul();
	void Div();
	*/
	double Calculate(double x, char cper, double y); // calculate 함수 원형
};
	
#endif