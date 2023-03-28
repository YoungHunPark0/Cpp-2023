//protect 상속
#include <iostream>
using namespace std;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3)
	{ }
};

class Derived:protected Base{ }; // empty
// public하면 num3 가능
int main()
{
	Derived drv;
	cout << drv.num3 << endl; // 컴파일 에러발생!
	// public하면 num3 가능
	return 0;
}