// static 멤버변수(==클래스 변수)
// 생성자의 주된기능: 객체생성시 초기화

#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt; // sosimple내에 선언된 static변수이니, sosimple 객체에 의해서 공유됨
public:
	SoSimple()
	{
		simObjCnt++; 
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
		// sosimple멤버함수(생성자) 내에서는 마치 멤버변수인것처럼 접근가능. 
		// 그렇다고 static변수를 멤버변수 착각하면 안됨!
	}
};
int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
	static int cmxObjCnt; //socomplex내에 선언된 static변수이니, socomplex 객체에 의해서 공유됨
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout <<cmxObjCnt <<"번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0; // socomplex에 선언된 static 변수를 초기화

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2=cmx1;
	SoComplex();

	return 0;
}