#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human { 
	char* name; // ���������� ����. �޸� �����Ҵ� ���� 
	Human ary[10]; // �迭�ε� Ÿ���� ��ü. ���� ���ϳ�����, humanŬ���� Ÿ���� ��ü�� ������ �� ����.
	int id; // �й�,�ֹι�ȣ�� char���� �迭���� �ϴ°� ����
	int age;	// �Ϲ��ڷ��� int float �� �Ű����� Ȱ���ϱ� ����
public: // �ܺο��� ���ٰ��� 
	// ������ ������� setdata ���ͼ� setdata�� ���̻� �Ⱦ��� �ּ�ó��
	Human(const char *aname, int aid, int aage/*�Ű�����*/) {
		// new�� ���ؼ� �������� �Ҵ�
		name = new char[strlen(aname) + 1];  
		//�޸� �����Ҵ� ���� ũ��(char=1byte), ���� ����������
		// strlen : �����Ϳ��� ����� ���ڿ� ũ�� �˷���. +1 �ϴ������� ũ�Ⱑ �������� �ȵǱ⶧��
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	// �Ҹ��� : ��ü�� �Ҹ��Ŵ. �����Ҵ� ������ ���������-delete
	~Human(){
		delete[] name; // �迭���� name �Ҹ�
	} // �Ҹ��� : ��ü�� �Ҹ��Ŵ. �����Ҵ� ������ ���������-delete


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
		cout << "�̸�: " << name << ", " << "�й�: " << id << ", " << "����: " << age << endl;
	}
};

int main()
{
	//Human.h; ������ �����߱⶧���� 
	Human h("ȫ�浿", 1, 30); ;
	//h.setData(("ȫ�浿", 1, 30);
	h.getData(); // ���
	
	// ��ü�迭 ����. �迭���·� ��������
	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��",3,25), Human("�ƹ���",4,35) };
	//���
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}