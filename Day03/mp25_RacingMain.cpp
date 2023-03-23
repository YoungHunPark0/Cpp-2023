// RacingMain
#include "mp25_car.h"

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