/* 
const int num=10; ������ ���ȭ �ϵ�
const SoSimple sim(20); ��ü�� ���ȭ �� �� �ִ�
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n):num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main()
{
	const SoSimple obj(7); // const ��ü�� ����
	// obj.AddNum(20);  // ����Լ� AddNum�� const�Լ��� �ƴϱ� ������ ȣ�� �Ұ���
	obj.ShowData();		// ����Լ� ShowData�� const�Լ����� const��ü ���ȣ�� ����
	return 0;
}