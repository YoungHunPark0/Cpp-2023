#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/* class
�Ӽ�: �������
���: ����Լ�
*/
class Human { // ��ü�� �����ϸ� ��ü���� ���ÿ� �Ҵ��
	char name[20]; // �迭���� 
	int id; // �й�,�ֹι�ȣ�� char���� �迭���� �ϴ°� ����
	int age;	// �Ϲ��ڷ��� int float �� �Ű����� Ȱ���ϱ� ����
public: // �ܺο��� ���ٰ��� 
	// ������ ������� setdata ���ͼ� setdata�� ���̻� �Ⱦ��� �ּ�ó��
	Human(const char aname[20], int aid, int aage/*�Ű�����*/) {
		strcpy_s(name, aname);
		id = aid;
		age = aage;
	}
//�����ڸ� ����ҷ��� �ʱⰪ�� �ֱ� ���ؼ� �޼ҵ带 �ۼ��ؾߵ�
	/*
	void setData(const char aname[20], int aid, int aage(�Ű�����)) {
		//setdata = data�� �����Ѵٶ�� ��Ȯ�� �� �� ����
		// ������ִ� �迭�� ���ڸ� �����������
		// 1. �迭���� �Ҷ� �ʱ�ȭ�� �Ѵ�.(char name[20]="ȫ�浿";)
		// 2. strcpy ����ϱ�. ������(const, strcpy_s)
		//strcpy_s(name, aname); 
		//id = aid;
		//age = aage;
	}
	*/
	void getData() {
		cout << "�̸�: " << name <<", " << "�й�: " << id <<", " << "����: " << age << endl;
	}
};

int main()
{
	//Human.h; ������ �����߱⶧���� 
	Human h("ȫ�浿", 1, 30); ;
	//h.setData(("ȫ�浿", 1, 30);
	h.getData(); // ���
	return 0;
}