// �Ҹ��� destructor
#include <iostream>
using namespace std;

class CTest // class_test
{
private:
	int num;
public:
	CTest(int n) { // ������
		num = n;
		cout << num << "CTest Constructor" << endl;
	}
	~CTest() { // ����Ŭ���� �Ҹ���
		cout << "CTest Destructor" << endl;
	}
};
class CTestSub :public CTest {
private:
	int subn;
public: // �ڽ�Ŭ������ �Ӽ��̳� Ư¡�� �θ𺸴� ���ƾ���
	CTestSub(int sn, int n) : CTest(sn){ // �ڽ�Ŭ���� ������ :(����̴ϼȶ�����) ����Ŭ����(�ڽļӼ�) �ʱ�ȭ��! 
		subn = n;
		cout << subn << "CTestSub Constructor" << endl;
	}
	~CTestSub() { // ����Ŭ���� �Ҹ���
		cout << "CTestSub Destructor" << endl;
	}
};
int main()
{
	CTest c1(10);
	cout << "==============" << endl;
	CTestSub c2(1, 10); // c2(�θ�Ӽ�, �ڽļӼ�)

	return 0;
}
/*
10CTest Constructor
==============
1CTest Constructor
10CTestSub Constructor
CTestSub Destructor
CTest Destructor
CTest Destructor
*/