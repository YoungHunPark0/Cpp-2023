// �ӽð�ü
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
	Temporary(100); // �ӽð�ü�� ���� �����ϴ� ���. 100���� �ʱ�ȭ�� temporary�ӽð�ü ����
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo(); // �ӽð�ä �����ϰ�, �� ��ä ������� showtempinfo�Լ� ȣ��
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300); // �ӽð�ü ����, �� �ΰ�ü�� �޸�, ������ ref�� �ӽð�ü ����
	cout << "********** end of main!" << endl << endl;
	return 0;
}