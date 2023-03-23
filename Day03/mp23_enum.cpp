/* RacingCarEnum 열거형
#include <iostream>
using namespace std;

namespace CAR_CONST // car_const 이름공간 안에 구조체 car에서 사용하는 상수들을 모아놈
{
	enum
	{
		ID_LEN		=20,	// 구조체 Car와 관련된 정보를 상수화
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
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료랑: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
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
*/

//RacingCarOuterFunc. 함수의 원형선언을 구조체안에 두고, 함수의 정의를 구조체 밖으로 빼내는 것. 
//뺴낸 다음 해당 함수가 어디에 정의되어있는지 대한 정보만 추가하면 됨
#include <iostream>
using namespace std;

namespace CAR_CONST // car_const 이름공간 안에 구조체 car에서 사용하는 상수들을 모아놈
{
	enum
	{
		ID_LEN = 20,	// 구조체 Car와 관련된 정보를 상수화
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

	void ShowCarState(); // 상태정보 출력. 
	void Accel();		// 엑셀, 속도증가
	void Break();		// 브레이크, 속도감소
//구조체 안에 함수의 원형만 남으니, 함수의종류가 한눈에 들어오고, 적절한 주석을 통해서 함수의 기능도 쉽게 판단된다.
};

void Car::ShowCarState() //원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져나옴
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료랑: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
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
	Car run99 = { "run99", 100, 0 }; // 초기화 대상은 함수가 아닌 변수. 따라서 함수가 삽입되어있어도 초기화 방법은 달라지지 않는다
	run99.Accel();	// 구조체 run99에 존재(존재하자고 이해)하는 Accel함수를 호출. 구조체 내 선언된 변수에 접근하는 방법과 동일한 방식으로 함수호출
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
