//this 포인터
//PointerThis
#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this; // this 반환. 문장을 실행하는 객체포인터를 반환하는 의미.
		// 그래서 반환형도 SoSimple* 형으로 선언
	}
};

int main()
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 객체 주소값 저장. 
	//이때 this는 SoSimple의 포인터이므로 Sosimple형 포인터 변수에 저장
	cout << ptr1 << ", "; // ptr1에 저장된 주소값 출력
	ptr1->ShowSimpleData(); // ptr1이 가르키는 객체 showsimpledata 함수를 호출

	SoSimple sim2(100);
	SoSimple* ptr2 = sim2.GetThisPointer(); // sim2 객체 주소값 저장
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}