//this �����ʹ� ��ü �ڱ��ڽ��� ����Ų��.
// num1(�������) = num1(�Ű�����); �̹� ��ü�����͸� ������� ���������� ���پȵ�
// this�� ����ϸ� ������!
#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1; // this->num1, this->num2�� �������. num1, nu2�� �Ű����� �ǹ�
		this->num2 = num2; // �Ű����� num1,num2�� ���� ���޵� ���� ������� num1,num2�� �����
	}
	/*
	TwoNumber(int num1, num2)
		: num1(num1), num2(num2) // ��� �̴ϼȶ����������� this ������ ����� �� ����
	{
		// empty
	}
	*/
	void ShowTwoNumber()
	{
		cout << this->num1 << endl; // this������ ��������ν�, ��������� �������� ��Ȯ����
		cout << this->num2 << endl; // �Ϲ������δ� this������ �����ؼ� ǥ����
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}
// ��ü�� �����ϸ� ��ü���� ��������� �Ҵ�. �޼ҵ�� x, 
// �޼ҵ�� �ڵ峻 �����ϱ⶧���� ������ ���������->this�����͸� ���� ��ü �ּҰ��� ���� ȣ��
// ����Լ��� ����� ���¸� this �����͸� ���ؼ� ȣ�Ⱑ��
