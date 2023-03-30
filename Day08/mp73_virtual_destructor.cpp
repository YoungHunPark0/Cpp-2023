// ���� �Ҹ���(virtual destructor)
#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int n):num(n) {
		num = n;
		cout << num << "CTest constructor" << endl;
	}
	virtual~CTest() {
		cout << "CTest destuctor" << endl;
	}
	void func() {
		cout << "CTest func" << endl;
	}
	virtual void vfunc() { // �����Լ� (����Ŭ����) // �ڽ�Ŭ������ �����Լ��� ���Ŷ� virtual �����س���
			// virtual �����س����� runtime���� ����Ǵ� �Լ��� ������
		cout << "CTest vfunc" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int snum;
public:
	CTestSub(int n1, int n2) :CTest(n1), snum(n2)
	{
		cout << snum << "CTestSub constructor" << endl;
	}
	~CTestSub() {
		cout << "CTestSub destructor" << endl;
	}
	void vfunc() { // ����Ŭ���� �����Լ� �������̵�
		cout << "CTestSub func()" << endl;
	}
};
int main()
{/*
	CTest c1(10);
	cout << "====================" << endl;
	CTestSub c2(1, 10);
	// ������� ���� x
	// �����߻����Ѻ� ����Ŭ������ ����Ŭ������ ������Ŵ
	cout << "====================" << endl;
	*/
	CTest* ps = new CTestSub(3, 33); // ����Ŭ������ ��ü�����ͷ� ����Ŭ���� ��ü�� ȣ��
	// ȥ�ڽ����Ű�� 3CTest constructor / 33CTestSub constructor
	delete ps;
	/* delete�� ���� ����Ŭ���� �Ҹ��� ȣ�������� ����Ŭ���� �Ҹ��ڴ� ȣ��ȵŴ� ���� �߻�
	* -> ����Ҹ��ڸ� �����ϸ� �����ذ�! ����Ŭ���� �Ҹ��ڿ� virtual �߰�
	3CTest constructor
	33CTestSub constructor
	CTest destuctor
	----- ����Ŭ���� �Ҹ��� ����Ҹ��ڷ� ��ȯ-> ����Ŭ���� �Ҹ��� ȣ���
	3CTest constructor
	33CTestSub constructor
	CTestSub destructor
	CTest destuctor
	*/
	return 0;
}