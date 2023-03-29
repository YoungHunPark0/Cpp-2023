#include <iostream>
using namespace std;

class First
{
public: // 7.13.19행 총3개 클래스가 상속관계 연결, myfunc함수를 통해 오버라이딩 관계형성
	virtual void MyFunc() { cout << "FirstFunc" << endl; } 
};

class Second : public First
{
public:// 7.13.19행 총3개 클래스가 상속관계 연결, myfunc함수를 통해 오버라이딩 관계형성
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:// 7.13.19행 총3개 클래스가 상속관계 연결, myfunc함수를 통해 오버라이딩 관계형성
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main()
{
	Third* tptr = new Third(); // Third객체생성->Third,Second형,First형 포인터 변수로 참조
	Second* sptr = tptr;// Third객체생성->Third,Second형,First형 포인터 변수로 참조
	First* fptr = sptr;// Third객체생성->Third,Second형,First형 포인터 변수로 참조

	fptr->MyFunc(); // 각 포인터 형 변수를 이용해서 myfunc함수 호출
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}