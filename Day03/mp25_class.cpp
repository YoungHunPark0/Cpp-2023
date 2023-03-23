
#include <iostream>
#include <cstring>
#include "mp25_car.h" // 멤버함수 정의부분을 컴파일 하는데도 클래스의 선언정보가 필요함.
//멤버함수에서 접근하는 변수의 존재유무를 확인해야하기 때문. 
using namespace std;

void Car::InitMembers(const char* ID, int fuel) // 클래스 안에서 선언된 변수의 초기화 목적으로 정의된 함수
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
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
	Car run99; // 초기화 대상은 함수가 아닌 변수. 따라서 함수가 삽입되어있어도 초기화 방법은 달라지지 않는다
	run99.InitMembers("run99", 100);	// 구조체 run99에 존재(존재하자고 이해)하는 Accel함수를 호출. 구조체 내 선언된 변수에 접근하는 방법과 동일한 방식으로 함수호출
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	return 0;
}
*/