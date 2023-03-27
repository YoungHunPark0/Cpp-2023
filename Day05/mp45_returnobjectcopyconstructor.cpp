#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n) // AddNum �������� ��ȯ�ϴ� �Լ�
	{
		num += n;
		return *this; // ��ü�ڽ��� ��ȯ. ��ȯ���� ������. �������� ��ȯ��
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) // ������ ���ް������� ��������ڰ� ȣ���
{
	cout << "return ����" << endl;
	return ob; // ob��ü��ȯ. ��ȯ���� �������̾ƴ�->ob��ü ���纻�� ��������鼭 ��ȯ
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData(); // SimpleFuncObj�Լ� ��ȯ�� ��ü������� AddNum�Լ�ȣ��
											// AddNum�Լ��� ��ȯ�ϴ� �������� ������� ShowData�Լ� ȣ��
	obj.ShowData(); // 35�� ��°���� ���ϱ����ؼ�, 34�࿡�� ������ ��ü�� ������� showdata�Լ� ȣ��
	return 0;
}