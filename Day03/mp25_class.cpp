
#include <iostream>
#include <cstring>
#include "mp25_car.h" // ����Լ� ���Ǻκ��� ������ �ϴµ��� Ŭ������ ���������� �ʿ���.
//����Լ����� �����ϴ� ������ ���������� Ȯ���ؾ��ϱ� ����. 
using namespace std;

void Car::InitMembers(const char* ID, int fuel) // Ŭ���� �ȿ��� ����� ������ �ʱ�ȭ �������� ���ǵ� �Լ�
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "������ID: " << gamerID << endl;
	cout << "�����: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

/*
// RacingMain
#include "Car.h"

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
*/