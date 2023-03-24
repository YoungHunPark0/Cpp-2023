// 생성자 Constructor
// 생성자의 이름은 클래스이름
// 생성자는 출력이 없음
// 생성자도 함수의 일종, 오버로딩 가능.
// 생성자도 함수의 일종, 매개변수에 디폴트값 설정가능
#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	// 생성자 오버로딩
	SimpleClass()
	{
		printf("defalu 생성자\n");
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		printf("인수 하나 갖는 생성자\n");
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		printf("인수 두개 갖는 생성자\n");
		num1 = n1;
		num2 = n2;
	}
	/*
	SimpleClass(int n1=0, int n2=0)
	{
		num1=n1;
		num2=n2;
	}
	*/

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main()
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}