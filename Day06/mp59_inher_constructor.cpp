// ������ ȣ��
#include <iostream>
using namespace std;

class Super
{
public:
	Super()
	{	cout << "Super()" << endl;	}
	~Super()
	{	cout << "~Super()" << endl;	}
};

class Sub : public Super //sub�� superŬ���� ��ӹ���
{
public:
	Sub()
	{	cout << "Sub()" << endl;}
	~Sub()
	{	cout << "~Sub()" << endl;}
};

int main()
{
	cout << "Start" << endl; 
	Sub obj; //����Ŭ���� Ÿ���� ��ä����. ��ä������ ���� ������ ȣ���Ұ���
	cout << "Stop" << endl;

	return 0;
}
// ȣ���� �ڽ�Ŭ������ ��ü
// �ڽ�Ŭ������ ��ü�� ���� �װ� �θ�Ŭ������ ��ü�� ����
// �ʰ� �� ���� ��������