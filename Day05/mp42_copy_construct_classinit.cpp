// classinit
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
		// empty
	}
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) // ������ �߰�
		// :�ݷ��ʱ�ȭ, �̴ϼȶ������� �̿��ؼ� ��� �� ����� ���� ����
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl; // ������ ȣ�� Ȯ���ϱ� ���� ����
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1; // SoSimple(SoSimple& copy) ���� ���ǵ� ������ ȣ��
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();

	return 0;
}