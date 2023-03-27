#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
public:
	SelfRef(int n) : num(n)
	{
		cout << "��ü����" << endl;
	}
	SelfRef& Adder(int n) // ��ȯ���� *this, ��ü�ڽ������Ͱ� �ƴ�, ��ü�ڽ��� ��ȯ�ϰڴٴ� �ǹ̰� ��
		// �׷���, ��ȯ���� ������ SelfRef& ���� �����. ���� ��ü�ڽ��� ������ �� �ִ�
		// '������ ����(���� ������)'�� ��ȯ��
	{
		num += n;
		return *this;
	}
	SelfRef& ShowTwoNumber() // ��ü �ڽ��� ������ �� �ִ� �������� ��ȯ�ϵ��� ����
	{
		cout << num << endl;
		return *this;
	}
};

int main()
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2); // ��ü obj�� adder�Լ� ȣ��. adder�Լ��� ��ü�ڽ��� �������� ��ȯ
	// �� ��ü obj �������� ��ȯ. ���� ������ ref�� ��ü obj�� ������
	
	obj.ShowTwoNumber(); // 30�࿡�� �Ͼ�� �� Ȯ���ϱ�����, ��ü�� ����Ǿ� �ִ� �� ���
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber(); 
	// ���� ��üref�� �Լ�Adder ȣ��. adder�� ������ ��ȯ�ϹǷ�, 
	//��ȯ�������� �ٽ� showtwonumber�Լ��� ȣ��. ���������� ��ȯ�� �������� �̿��ؼ� adderȣ��
	// �̾ showtwonumber�Լ� ȣ��. ���Լ��� ��ü�� �������� ��ȯ�ϱ� ������ ������ ������
	return 0;
}