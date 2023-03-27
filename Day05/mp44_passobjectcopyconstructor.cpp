#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple(const SoSimple& copy) :num(copy.num) // ���� �������� ȣ��ñ⸦ �˱����ؼ�
		// ��������ڸ� ������ ������. ����Ʈ��������ڿ��� �������������� 14�� ���ڿ����
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj); // �Լ�SimpleFuncObj�� ȣ���ϸ鼭 ��ü obj�� ���ڷ� ����
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}