/* 1. True and False
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int i = 0;

	cout << "true: " << true << endl; // true,false ������� �� ��³���Ȯ���ϱ� ���� ����
	cout << "false" << false << endl;

	while (true) // c���� ���ѷ����� �����ϱ� ���ؼ� ���� 1 ���. c++�� 1 ����� �������� true�� ��Ż���Ҽ��� ����
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}
	cout << endl;

	cout << "sizeof 1:" << sizeof(1) << endl; // ��� 1�� ��� 0�� ������ũ�� Ȯ���ϱ����� ����
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof true:" << sizeof(true) << endl; // true, false ũ�� Ȯ���ϱ� ���� ����
	cout << "sizeof false:" << sizeof(false) << endl;
	return 0;
}
*/
// �ڷ��� bool
#include <iostream>
using namespace std;

bool IsPositive(int num) // bool�� �⺻�ڷ���, �Լ��� ��ȯ������ ���𰡴�
{
	if (num <= 0)
		return false;
	else
		return true;
}
int main()
{
	bool isPos;    // bool�� ������ �����ؼ� �Լ� IsPositive�� ��ȯ�ϴ� bool�� �����͸� �����ϰ� ����
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num); // bool�� ������ �����ؼ� �Լ� IsPositive�� ��ȯ�ϴ� bool�� �����͸� �����ϰ� ����
	if (isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}