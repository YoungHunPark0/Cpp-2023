#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n) // AddNum 참조형을 반환하는 함수
	{
		num += n;
		return *this; // 객체자신을 반환. 반환형이 참조형. 참조값이 반환됨
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) // 인자의 전달과정에서 복사생성자가 호출됨
{
	cout << "return 이전" << endl;
	return ob; // ob객체반환. 반환형이 참조형이아님->ob객체 복사본이 만들어지면서 반환
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData(); // SimpleFuncObj함수 반환한 객체대상으로 AddNum함수호출
											// AddNum함수가 반환하는 참조값을 대상으로 ShowData함수 호출
	obj.ShowData(); // 35행 출력결과와 비교하기위해서, 34행에서 생성한 객체를 대상으로 showdata함수 호출
	return 0;
}