// static �������(==Ŭ���� ����)
// �������� �ֵȱ��: ��ü������ �ʱ�ȭ

#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt; // sosimple���� ����� static�����̴�, sosimple ��ü�� ���ؼ� ������
public:
	SoSimple()
	{
		simObjCnt++; 
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
		// sosimple����Լ�(������) �������� ��ġ ��������ΰ�ó�� ���ٰ���. 
		// �׷��ٰ� static������ ������� �����ϸ� �ȵ�!
	}
};
int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt; //socomplex���� ����� static�����̴�, socomplex ��ü�� ���ؼ� ������
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout <<cmxObjCnt <<"��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};
int SoComplex::cmxObjCnt = 0; // socomplex�� ����� static ������ �ʱ�ȭ

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2=cmx1;
	SoComplex();

	return 0;
}