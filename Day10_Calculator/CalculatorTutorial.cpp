//author �ڿ���
#include "Calculator.h"
#include <iostream>
using namespace std;

int main()
{
	double x;
	char cper;
	double y;

	Calculator cal; // Ŭ���� Calculator�� ��ü cal�� ������
	printf("Calculator Console Application\n");
	printf("Please enter the operation to perform. Format: a+b | a-b | a*b | a/b Press \"ctrl + c\" to exit the program\n");
	while (true) { // ���̸� �ݺ�����
		cout << "input >> " << endl; // ���̸� input>> �ݺ����
		cin >> x >> cper >> y; // cin���� x, cper, y�� ����
		cal.Calculate(x, cper, y); // x,cper,y�� �Է¹��� ���� calculatorŬ���� ����Լ��� calculate�� ������
	}
	
	return 0;
}