#pragma once
//Car.h
#ifndef __CAR_H__ // 헤더파일의 중복포함 문제해결하기위한 매크로 선언
#define __CAR_H__

namespace CAR_CONST // 클래스 Car에서 제한적 사용 상수의 선언 클래스Car와 같은파일 선언
{
	enum
	{
		ID_LEN = 20, MAX_SPO = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif