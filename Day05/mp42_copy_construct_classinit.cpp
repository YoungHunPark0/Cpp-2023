// classinit
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
		// empty
	}
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) // 생성자 추가
		// :콜론초기화, 이니셜라이저를 이용해서 멤버 대 멤버의 복사 진행
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl; // 생성자 호출 확인하기 위한 문장
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1; // SoSimple(SoSimple& copy) 에서 정의된 생성자 호출
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}