/* 1. True and False
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl; // true,false 출력했을 때 출력내용확인하기 위한 문장
	cout << "false" << false << endl;

	while (true) // c언어에서 무한루프를 형성하기 위해서 숫자 1 사용. c++도 1 사용할 수있지만 true를 대신사용할수도 있음
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1:" << sizeof(1) << endl; // 상수 1과 상수 0의 데이터크기 확인하기위한 문장
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof true:" << sizeof(true) << endl; // true, false 크기 확인하기 위한 문장
	cout << "sizeof false:" << sizeof(false) << endl;
	return 0;
}
*/
// 자료형 bool
#include <iostream>
using namespace std;

bool IsPositive(int num) // bool도 기본자료형, 함수의 반환형으로 선언가능
{
	if (num <= 0)
		return false;
	else
		return true;
}
int main()
{
	bool isPos;    // bool형 변수를 선언해서 함수 IsPositive가 변환하는 bool형 데이터를 저장하고 있음
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num); // bool형 변수를 선언해서 함수 IsPositive가 변환하는 bool형 데이터를 저장하고 있음
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}