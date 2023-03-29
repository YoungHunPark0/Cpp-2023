#include <iostream>
using namespace std;

class First
{
public: // 7.13.19�� ��3�� Ŭ������ ��Ӱ��� ����, myfunc�Լ��� ���� �������̵� ��������
	virtual void MyFunc() { cout << "FirstFunc" << endl; } 
};

class Second : public First
{
public:// 7.13.19�� ��3�� Ŭ������ ��Ӱ��� ����, myfunc�Լ��� ���� �������̵� ��������
	void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:// 7.13.19�� ��3�� Ŭ������ ��Ӱ��� ����, myfunc�Լ��� ���� �������̵� ��������
	void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main()
{
	Third* tptr = new Third(); // Third��ü����->Third,Second��,First�� ������ ������ ����
	Second* sptr = tptr;// Third��ü����->Third,Second��,First�� ������ ������ ����
	First* fptr = sptr;// Third��ü����->Third,Second��,First�� ������ ������ ����

	fptr->MyFunc(); // �� ������ �� ������ �̿��ؼ� myfunc�Լ� ȣ��
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}