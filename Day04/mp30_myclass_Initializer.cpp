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
};
Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) { // ������ ����
	printf("������ ȣ��\n");
// : id(aid), age(aage)=>�̴ϼȶ�����(Initializer), �ݷ��ʱ�ȭ: ������,�޼ҵ尡 ȣ��� ��(����Ǳ� ����) ����Ǿ� �ٷ� �ʱ�ȭ
	//id = aid; �ݷ��ʱ�ȭ ���Ѽ� �ּ�ó��
	//age = aage;
	strcpy_s(name, 10, aname);
}

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