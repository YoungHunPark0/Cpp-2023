#include <iostream>
using namespace std;

class Myclass
{
	int num1, num2;
	const char* name;
public:
	Myclass(int anum1=0, int anum2=0, const char* aname=nullptr): num1(anum1), num2(anum2), name(aname){ }
	// 인자를 전달하지 않는 객체
	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << name<< endl;
	}
};

int main()
{
	Myclass m(1, 2, "hong");
	m.ShowData();
	Myclass cm(m); // cm=m
	cm.ShowData();

	Myclass cm1;
	cm1 = cm;
	cm1.ShowData();

	return 0;
}