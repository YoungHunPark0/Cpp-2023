// 구조체 struct
/* RacingCar
#include <iostream>
using namespace std;

#define ID_LEN		20	// 구조체 Car와 관련된 정보를 상수화
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료랑
	int curSpeed; // 현재속도
};

void ShowCarState(const Car& car) // 차의 정보를 출력하는기능 함수. 단순히 정보만 출력하기에 const참조자를 매개변수로 선언함
{
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료랑: " << car.fuelGauge << "%" << endl;
	cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car) // 차의 가속을 위해 엑셀 밟은상황 표현 함수. 엑셀밟을때마다 연료가 줄어들고, 스피드가 올라가는 상황 표현
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

void Break(Car& car) // 브레이크 밟은상황 표현 함수. 연료소모가 동반되지만, 속도감소 표현
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
	Car run99 = { "run99", 100, 0 }; // 구조체 변수의 선언 및 초기화
	Accel(run99);	// 엑셀과 브레이크 바릅은 상황을 연출
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

#define ID_LEN		20	// 구조체 Car와 관련된 정보를 상수화
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car	// 함수를 멤버로 지니는 구조체의 정의
{
	char gamerID[ID_LEN]; // 소유자 ID
	int fuelGauge; // 연료랑
	int curSpeed; // 현재속도

	void ShowCarState()
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료랑: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
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
	Car run99 = { "run99", 100, 0 }; // 초기화 대상은 함수가 아닌 변수. 따라서 함수가 삽입되어있어도 초기화 방법은 달라지지 않는다
	run99.Accel();	// 구조체 run99에 존재(존재하자고 이해)하는 Accel함수를 호출. 구조체 내 선언된 변수에 접근하는 방법과 동일한 방식으로 함수호출
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 }; // 또다른 구조체 변수 선언. 이 구조체를 대상으로 Accel함수 호출. 구조체 내에 함수가 정의되었기 때문에 구조체 변수를 대상으로 함수호출
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}