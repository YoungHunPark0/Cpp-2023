#include <iostream>
using namespace std;
// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����,����)
class Myclass {
	// �������:�Ӽ�
private: // �ܺ���������, public�� �ܺ����� �����ϱ⿡ classƯ¡�� ����,���� ����ż� �߾ȳ���
	int id; // num
	char age; // ch
	char name[10]; //arr[]//private- Ư¡,���� �����͵�
	// ����Լ�(=�޼ҵ�): ���. Ŭ�������� �Լ��� �����ϱ⿡ �޼ҵ带 ���ؼ� �����ϴ� ���� Ŭ����
public:
	void set(char aid, int aage, const char *aname)
		// set- ������ �����ϴ� ����, �ʱ�ȭ���·� ����. �Ű������� �μ��� �޾ƾ���
	{
		id = aid;	// ������ ����� , �޼ҵ����Ǵ� ������ ������
		age = aage;
		strcpy_s(name, 10, aname); // ���ڿ��� strcpy_s
		//name = *aname; �̷��� �ϸ� ������. strcpy_s����ϱ�
	}
	void get() // �ʱ�ȭ ��Ų �͵��� <���>�ϴ�����
	{
		cout << id <<' '<< name <<' '<< age << endl;
	}
};

int main()
{
	Myclass s;
	s.set('2', 23, "ȫ�浿");
	s.get();
	return 0;
}