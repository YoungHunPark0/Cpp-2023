// 임시객체
#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main()
{
	Temporary(100); // 임시객체를 직접 생산하는 방법. 100으로 초기화된 temporary임시객체 생성
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo(); // 임시객채 생성하고, 이 객채 대상으로 showtempinfo함수 호출
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300); // 임시객체 생성, 앞 두객체와 달리, 참조자 ref로 임시객체 참조
	cout << "********** end of main!" << endl << endl;
	return 0;
}