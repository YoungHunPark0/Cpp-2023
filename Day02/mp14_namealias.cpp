// �̸����� ��Ī ����. �̸������� ��ø�Ǹ鼭 �����ϰ� ���Ǿ��� ��
#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;		// ��Ī�� ����Ǳ� ���� ���� num1, num2�� ������ ���̰�����
	AAA::BBB::CCC::num2 = 30;
	
	namespace ABC = AAA::BBB::CCC;  // AAA::BBB::CCC�� ABC��� ��Ī�� �ٿ���
	cout << ABC::num1 << endl;		// ��Ī���� ������ ����
	cout << ABC::num2 << endl;
	return 0;
}