/* 
const int num=10; 변수를 상수화 하듯
const SoSimple sim(20); 객체도 상수화 할 수 있다
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main()
{
	const SoSimple obj(7); // const 객체를 생성
	// obj.AddNum(20);  // 멤버함수 AddNum은 const함수가 아니기 때문에 호출 불가능
	obj.ShowData();		// 멤버함수 ShowData는 const함수여서 const객체 대상호출 가능
	return 0;
}