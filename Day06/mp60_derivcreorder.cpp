//유도클래스의 객체 생성과정
#include <iostream>
using namespace std;

class SoBase
{
private:
	int baseNum;
public:
	SoBase() :baseNum(20)
	{
		cout << "SoBase()" << endl;
	}
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class SoDerived :public SoBase
{
private:
	int derivNum;
public:
	SoDerived() :derivNum(30) // 생성자를 살펴보면, 기초클래스 생성자 호출에 대한 언급이 없음을 알 수 있음
	{
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) :derivNum(n) // 기초클래스 생성자 호출에대한 언급이 없음
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) :SoBase(n1), derivNum(n2) // n1을 인자로 받는 기초클래스의 생성자 호출을 직접 명시하고있음
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main()
{
	cout << "case1..... " << endl;
	SoDerived dr1;
	dr1.ShowDerivData();
	cout << "-------------------" << endl;
	cout << "case2....." << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();
	cout << "-------------------" << endl;
	cout << "case3....." << endl;
	SoDerived dr3(23, 24);
	dr3.ShowDerivData();
	return 0;
}