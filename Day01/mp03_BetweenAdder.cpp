// ������� : if, switch
// �ݺ���� : for, while
#include <iostream>

int main(void)
{
	int val1, val2;
	int res = 0;// res = result
	std::cout << "�� ���� �����Է�: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{   // for(�ʱ��;���ǽ�;������){}
		for (int i = val1 + 1; i < val2; i++)
			res += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			res += i;
	}
	std::cout << "�� �� ������ ���� ��: " << res << std::endl;
	return 0;
}
