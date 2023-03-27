#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple(const SoSimple& copy) :num(copy.num) // 복사 생성자의 호출시기를 알기위해서
		// 복사생성자를 별도로 정의함. 디폴트복사생성자와의 유일한차이점은 14행 문자열출력
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj); // 함수SimpleFuncObj를 호출하면서 객체 obj를 인자로 전달
	cout << "함수호출 후" << endl;
	return 0;
}