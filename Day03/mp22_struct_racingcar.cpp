// ����ü struct
/* RacingCar
#include <iostream>
using namespace std;

#define ID_LEN		20	// ����ü Car�� ���õ� ������ ���ȭ
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN]; // ������ ID
	int fuelGauge; // �����
	int curSpeed; // ����ӵ�
};

void ShowCarState(const Car& car) // ���� ������ ����ϴ±�� �Լ�. �ܼ��� ������ ����ϱ⿡ const�����ڸ� �Ű������� ������
{
	cout << "������ID: " << car.gamerID << endl;
	cout << "�����: " << car.fuelGauge << "%" << endl;
	cout << "����ӵ�: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car) // ���� ������ ���� ���� ������Ȳ ǥ�� �Լ�. �������������� ���ᰡ �پ���, ���ǵ尡 �ö󰡴� ��Ȳ ǥ��
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car) // �극��ũ ������Ȳ ǥ�� �Լ�. ����Ҹ� ���ݵ�����, �ӵ����� ǥ��
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}
int main()
{
	Car run99 = { "run99", 100, 0 }; // ����ü ������ ���� �� �ʱ�ȭ
	Accel(run99);	// ������ �극��ũ �ٸ��� ��Ȳ�� ����
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}
*/
// RacingCarFuncAdd
#include <iostream>
using namespace std;

#define ID_LEN		20	// ����ü Car�� ���õ� ������ ���ȭ
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car	// �Լ��� ����� ���ϴ� ����ü�� ����
{
	char gamerID[ID_LEN]; // ������ ID
	int fuelGauge; // �����
	int curSpeed; // ����ӵ�

	void ShowCarState()
	{
		cout << "������ID: " << gamerID << endl;
		cout << "�����: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
	}
	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
};

int main()
{
	Car run99 = { "run99", 100, 0 }; // �ʱ�ȭ ����� �Լ��� �ƴ� ����. ���� �Լ��� ���ԵǾ��־ �ʱ�ȭ ����� �޶����� �ʴ´�
	run99.Accel();	// ����ü run99�� ����(�������ڰ� ����)�ϴ� Accel�Լ��� ȣ��. ����ü �� ����� ������ �����ϴ� ����� ������ ������� �Լ�ȣ��
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 }; // �Ǵٸ� ����ü ���� ����. �� ����ü�� ������� Accel�Լ� ȣ��. ����ü ���� �Լ��� ���ǵǾ��� ������ ����ü ������ ������� �Լ�ȣ��
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}