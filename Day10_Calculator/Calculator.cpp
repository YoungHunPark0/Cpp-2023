//author �ڿ���
#include <iostream>
#include "Calculator.h" // Calculator.h ������� ���
using namespace std;
double Calculator::Calculate(double x, char cper, double y) // Ŭ���� Calculator�� �Լ� Calculate ����
{
	if (cper == '+') {  // cper �������� ���� ������ �ϱ����ؼ� if�� ���
		cout << "=" << x + y << endl; // ��� x+y
		return x + y; // x+y���� ������
	}
	else if (cper == '-') {
		cout << "=" << x - y << endl;
		return x - y; 
	}
	else if (cper == '*') {
		cout << "=" << x * y << endl;
		return x * y; 
	}
	else if (cper == '/') { // zero division ����ó���� try, catch �����
		try // ����ó��
		{
			if (y == 0) throw y; //y�� 0�̸� y ����ó��
			cout << "=" << x / y << endl; // y�� 0�� �ƴϸ� x/y ������

			return x / y; // ���ϰ� x/y
		}
		catch (double exception)
		{
			cout << "���̻� ���� �� �����ϴ�.\n" << endl; // y����ó���� ���� ��Ƽ� ���
	
		}
	}
}

/*
Calculator::Calculator(int a, int b) : a1(a), b2(b) // Ŭ���� ����, ������ ����
{
}
void Calculator::Add() // add����
{
	cout << a1 + b2 << endl;
}
void Calculator::Sub() // sub ����
{
	cout << a1 - b2 << endl;
}
void Calculator::Mul()  // mul ����
{
	cout << a1 * b2 << endl;
}
void Calculator::Div() // div ����
{
	try // ����ó��
	{
		if (b2 == 0) throw b2;
		cout << float(a1) / float(b2) << endl;
	}
	catch (int exception) 
	{
		cout << "���̻� ���� �� �����ϴ�." << endl;
	}
}
*/