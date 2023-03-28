/*
�Լ��� �����ε��� �����Ϸ��� �Ű������� ���� �ڷ����� �޶����.
const ���������� �Լ� �����ε��� ���ǿ� �ش��
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
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main()
{
	SoSimple obj1(2);		// �Ϲݰ�ü�� const��ü�� ���� ����
	const SoSimple obj2(7); // �Ϲݰ�ü�� const��ü�� ���� ����

	obj1.SimpleFunc(); // �Ϲݰ�ü���-Simplefunc�Լ�ȣ��-void SimpleFunc()�� �Ϲݸ���Լ�
	obj2.SimpleFunc(); // const��ü���-Simplefunc�Լ�ȣ��-void SimpleFunc()�� const����Լ�

	YourFunc(obj1); //void YourFunc(const SoSimple& obj)�� ���ǵ� yourfunc�Լ��� ���޵Ǵ� ���ڸ� �����ڷ�
	YourFunc(obj2); // const�����ڷ� �޴´�. �����ڸ� �̿��� obj.simplefunc()�� �Լ�ȣ�� ����� 
	return 0;       // void SimpleFunc()�� const����Լ� ȣ��
}