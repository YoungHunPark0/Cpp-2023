#include <iostream>
using namespace std;

void static_Counter()
{
	static int cnt; // static������ ���������� ���������� �ʱ�ȭ���� ������ 0���� �ʱ�ȭ��.
	// �׸��� �� �ѹ� �����. cnt�� counter�Լ��� ȣ��ɶ����� ���Ӱ� �Ҵ�Ǵ� ���������� �ƴ�!
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