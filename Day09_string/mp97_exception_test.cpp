// 예외처리
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "피젯수를 입력하세요: " << endl;
	cin >> a;
	cout << "젯수를 입력하세요: " << endl;
	cin >> b;
	try {
		if (b == 0) throw b; // 예외가 발생되면 b를 던져주면 catch가 잡음
		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << endl;
	}
	catch (int ex)
	{
		cout << ex << "로 나눌 수 없습니다. 예외발생" << endl;
	}
	cout << "예외가 발생을 해도 정상종료!!!" << endl;

	return 0;
}