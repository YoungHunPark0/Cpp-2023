//author �ڿ���
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator // Calculator Ŭ��������
{
private:
	double x;
	char cper;
	double y;

public:
	/* ����
	int a1;
	int b2;
	Calculator(int a, int b);
	void Add();
	void Sub();
	void Mul();
	void Div();
	*/
	double Calculate(double x, char cper, double y); // calculate �Լ� ����
};
	
#endif