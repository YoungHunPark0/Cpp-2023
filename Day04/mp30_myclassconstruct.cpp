#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����,����)
class Myclass {
	// �������:�Ӽ�
private: // �ܺ���������, public�� �ܺ����� �����ϱ⿡ classƯ¡�� ����,���� ����ż� �߾ȳ���
	char id; // num
	int age; // ch
	char name[10]; //arr[]//private- Ư¡,���� �����͵�
	// ����Լ�(=�޼ҵ�): ���. Ŭ�������� �Լ��� �����ϱ⿡ �޼ҵ带 ���ؼ� �����ϴ� ���� Ŭ����
public: 
	Myclass(char aid, int aage, const char* aname); // ������
	void getData(); // �޼ҵ� ����(����)
	/*
	void set(char aid, int aage, const char* aname)
		// set- ������ �����ϴ� ����, �ʱ�ȭ���·� ����. �Ű������� �μ��� �޾ƾ���
	{
		id = aid;	// ������ ����� , �޼ҵ����Ǵ� ������ ������
		age = aage;
		strcpy_s(name, 10, aname); // ���ڿ��� strcpy_s
		//name = *aname; �̷��� �ϸ� ������. strcpy_s����ϱ�
	}
	
	void getData() // �ʱ�ȭ ��Ų �͵��� <���>�ϴ� ����// 
	{
		cout << id << ' ' << age << ' ' << name<< endl;
	}*/
};
Myclass::Myclass(char aid, int aage, const char* aname) { // ������ ����
	id = aid; 
	age = aage;
	strcpy_s(name, 10, aname);
}
// : id(aid), age(aage)=>�̴ϼȶ�����(Initializer), �ݷ��ʱ�ȭ: ������,�޼ҵ尡 ȣ��� ��(����Ǳ� ����) ����Ǿ� �ٷ� �ʱ�ȭ
void Myclass::getData() // �ʱ�ȭ ��Ų �͵��� <���>�ϴ�����// :: ���Ҽ����� ������ ������. 
{
	cout << id << ' ' << age << ' ' << name << endl;
}
int main()
{
	Myclass s('2', 23, "ȫ�浿");
	// s.set('2', 23, "ȫ�浿"); ������ �����ϸ鼭 �����ھȿ� ������
	s.getData();
	return 0;
}