// ���������� �ʿ��� ��Ȳ
#include <iostream>
using namespace std;

int simObjCnt = 0; // 5,6�� �ΰ��� �������� ����. �ϳ��� sosimple�� ��ü�� ����ü�� ����
int cmxObjCnt = 0; //  �ٸ��ϳ��� socomplex ��ü�� ����

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++; // ��ü�� ������ �� ���� �ش� ���������� ����. ������ ������ ��������
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++; // ��ü�� ������ �� ���� �ش� ���������� ����. ������ ������ ��������
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++; // ��ü�� ������ �� ���� �ش� ���������� ����. ������ ������ ��������
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}