// 전역변수가 필요한 상황
#include <iostream>
using namespace std;

int simObjCnt = 0; // 5,6행 두개의 전역변수 선언. 하나는 sosimple의 객체수 세기체수 세기
int cmxObjCnt = 0; //  다른하나는 socomplex 객체수 세기

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++; // 객체가 생성될 때 마다 해당 전역변수값 증가. 생성자 내에서 증가연산
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++; // 객체가 생성될 때 마다 해당 전역변수값 증가. 생성자 내에서 증가연산
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++; // 객체가 생성될 때 마다 해당 전역변수값 증가. 생성자 내에서 증가연산
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();
	return 0;
}