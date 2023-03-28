/*
const int num=10; ������ ���ȭ �ϵ�
const SoSimple sim(20); ��ü�� ���ȭ �� �� �ִ�
��������� const�� �پ������� �ݷ��ʱ�ȭ �̴ϼȶ�����
�޼ҵ忡 const�� �پ������� 
��ü�� const�پ������� const�پ��ִ� �޼ҵ常 ȣ��ȴ�
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
	int num1;
	const int n = 10; // c++���� �Ǳ��ϴµ� �����·δ� �Ⱦ�
public:
	SoSimple(int n) :num(n), n(num1)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
		cout << "n: " << n << endl;
		cout << "num1: " << num1 << endl;
	}
};

int main()
{
	const SoSimple obj(7); // const ��ü�� ����
	// obj.AddNum(20);  // ����Լ� AddNum�� const�Լ��� �ƴϱ� ������ ȣ�� �Ұ���
	obj.ShowData();		// ����Լ� ShowData�� const�Լ����� const��ü ���ȣ�� ����
	return 0;
}