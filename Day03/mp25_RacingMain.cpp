// RacingMain
#include "mp25_car.h"

int main()
{
	Car run99; // �ʱ�ȭ ����� �Լ��� �ƴ� ����. ���� �Լ��� ���ԵǾ��־ �ʱ�ȭ ����� �޶����� �ʴ´�
	run99.InitMembers("run99", 100);	// ����ü run99�� ����(�������ڰ� ����)�ϴ� Accel�Լ��� ȣ��. ����ü �� ����� ������ �����ϴ� ����� ������ ������� �Լ�ȣ��
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}