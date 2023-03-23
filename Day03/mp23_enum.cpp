/* RacingCarEnum ������
#include <iostream>
using namespace std;

namespace CAR_CONST // car_const �̸����� �ȿ� ����ü car���� ����ϴ� ������� ��Ƴ�
{
	enum
	{
		ID_LEN		=20,	// ����ü Car�� ���õ� ������ ���ȭ
		MAX_SPD		=200,
		FUEL_STEP	=2,
		ACC_STEP	=10,
		BRK_STEP	=10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN]; 
	int fuelGauge;
	int curSpeed;

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
			fuelGauge -= CAR_CONST::FUEL_STEP;

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
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
*/

//RacingCarOuterFunc. �Լ��� ���������� ����ü�ȿ� �ΰ�, �Լ��� ���Ǹ� ����ü ������ ������ ��. 
//���� ���� �ش� �Լ��� ��� ���ǵǾ��ִ��� ���� ������ �߰��ϸ� ��
#include <iostream>
using namespace std;

namespace CAR_CONST // car_const �̸����� �ȿ� ����ü car���� ����ϴ� ������� ��Ƴ�
{
	enum
	{
		ID_LEN = 20,	// ����ü Car�� ���õ� ������ ���ȭ
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState(); // �������� ���. 
	void Accel();		// ����, �ӵ�����
	void Break();		// �극��ũ, �ӵ�����
//����ü �ȿ� �Լ��� ������ ������, �Լ��������� �Ѵ��� ������, ������ �ּ��� ���ؼ� �Լ��� ��ɵ� ���� �Ǵܵȴ�.
};

void Car::ShowCarState() //���� ���ϴ� ����ü�� �̸��� ����ϸ鼭 ����ü ������ �Լ��� ���ǰ� ��������
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
void Car:: Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100, 0 }; // �ʱ�ȭ ����� �Լ��� �ƴ� ����. ���� �Լ��� ���ԵǾ��־ �ʱ�ȭ ����� �޶����� �ʴ´�
	run99.Accel();	// ����ü run99�� ����(�������ڰ� ����)�ϴ� Accel�Լ��� ȣ��. ����ü �� ����� ������ �����ϴ� ����� ������ ������� �Լ�ȣ��
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
