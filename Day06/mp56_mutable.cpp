#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2; // num2가 mutable 선언.-> 변수는 const함수내에서의 변경이 허용됨
	//mutable은  const의 기능을 약화시켜서 13,17행을 예외적으로 사용가능
public:
	SoSimple(int n1, int n2): num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1; // const함수내에서 num2에 저장된 값을 변경. num2가 mutable로 선언되었기때문 가능
	}
};

int main()
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}