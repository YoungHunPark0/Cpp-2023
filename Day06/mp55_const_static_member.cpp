#include <iostream>
using namespace std;

class CountryArea // ������ ����ũ�� �����س��� Ŭ����. �̷��� const static ����� �ϳ��� Ŭ������
				// ���̻� ���̴°��� �����̴�!
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main()
{
	cout << "���þ� ����: " << CountryArea::RUSSIA << "��" << endl;
	cout << "ĳ���� ����: " << CountryArea::CANADA << "��" << endl;
	cout << "�߱� ����: " << CountryArea::CHINA << "��" << endl;
	cout << "�ѱ� ����: " << CountryArea::SOUTH_KOREA << "��" << endl;
	return 0;
}
// 8~11�࿡ ���ǵ� ����� �����ϱ� ���ؼ� ���� ��ü�� ������ �ʿ�� ����.