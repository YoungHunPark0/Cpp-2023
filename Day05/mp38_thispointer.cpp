//this ������
//PointerThis
#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this; // this ��ȯ. ������ �����ϴ� ��ü�����͸� ��ȯ�ϴ� �ǹ�.
		// �׷��� ��ȯ���� SoSimple* ������ ����
	}
};

int main()
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // sim1 ��ü �ּҰ� ����. 
	//�̶� this�� SoSimple�� �������̹Ƿ� Sosimple�� ������ ������ ����
	cout << ptr1 << ", "; // ptr1�� ����� �ּҰ� ���
	ptr1->ShowSimpleData(); // ptr1�� ����Ű�� ��ü showsimpledata �Լ��� ȣ��

	SoSimple sim2(100);
	SoSimple* ptr2 = sim2.GetThisPointer(); // sim2 ��ü �ּҰ� ����
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}