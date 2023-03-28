/*
const int num=10; 변수를 상수화 하듯
const SoSimple sim(20); 객체도 상수화 할 수 있다
멤버변수에 const가 붙어있으면 콜론초기화 이니셜라이저
메소드에 const가 붙어있으면 
객체에 const붙어있으면 const붙어있는 메소드만 호출된다
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
	int num1;
	const int n = 10; // c++에서 되긴하는데 이형태로는 안씀
public:
	SoSimple(int n) :num(n), n(num1)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
		cout << "n: " << n << endl;
		cout << "num1: " << num1 << endl;
	}
};

int main()
{
	const SoSimple obj(7); // const 객체를 생성
	// obj.AddNum(20);  // 멤버함수 AddNum은 const함수가 아니기 때문에 호출 불가능
	obj.ShowData();		// 멤버함수 ShowData는 const함수여서 const객체 대상호출 가능
	return 0;
}