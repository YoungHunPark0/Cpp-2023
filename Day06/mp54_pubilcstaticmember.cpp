// static멤버변수의 또다른 접근방법
#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt; // static 멤버변수가 pubilc으로 선언됨
public: // 불필요하지만 변수와 함수의 구분을 목적으로 삽입
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0; // static멤버변수는 항상 이렇게 초기화함!!

int main()
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl; 
	// public에 선언된 static멤버는 어디서든 접근이 가능함. 클래스이름으로도 접근이 가능함
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}