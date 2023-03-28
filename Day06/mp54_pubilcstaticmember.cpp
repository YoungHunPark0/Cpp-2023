// static��������� �Ǵٸ� ���ٹ��
#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt; // static ��������� pubilc���� �����
public: // ���ʿ������� ������ �Լ��� ������ �������� ����
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0; // static��������� �׻� �̷��� �ʱ�ȭ��!!

int main()
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl; 
	// public�� ����� static����� ��𼭵� ������ ������. Ŭ�����̸����ε� ������ ������
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}