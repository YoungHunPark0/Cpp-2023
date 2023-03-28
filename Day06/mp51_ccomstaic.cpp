#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt; // static변수는 전역변수와 마찬가지로 초기화하지 않으면 0으로 초기화됨.
	// 그리고 딱 한번 실행됨. cnt는 counter함수가 호출될때마다 새롭게 할당되는 지역변수가 아님!
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

void Counter()
{
	int cnt=0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++) {
		static_Counter();
		Counter();
	}
	return 0;
}