// ��ü�� ������ �Ҹ�
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{
		cout << "������ ȣ��" << endl;
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "��������� ȣ��" << endl;
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/* ��°�
������ ȣ��
New Object: 000000C230D8F514 - 34�� obj����
��������� ȣ��
New Copy obj: 000000C230D8F614 - 35�� �Լ�ȣ��� ���� 26���� �Ű����� ob�� ����
Parm ADR: 000000C230D8F614 - 28�� ������ ���ؼ�
��������� ȣ��
New Copy obj: 000000C230D8F654 - 29���� ��ȯ���� ���� �ӽð�ü ����
Destroy obj: 000000C230D8F614 - �Ű����� ob�� �Ҹ�
Destroy obj: 000000C230D8F654 - 29���� ��ȯ���� ������ �ӽð�ü �Ҹ�

��������� ȣ��
New Copy obj: 000000C230D8F674 - 38�� �Լ�ȣ��� ���� 26���� �Ű����� ob�� ����
Parm ADR: 000000C230D8F674	   - 28���� ����
��������� ȣ��
New Copy obj: 000000C230D8F534 - 29���� ��ȯ���� ���� �ӽð�ü ����
Destroy obj: 000000C230D8F674  - �Ű����� ob�� �Ҹ�
Return Obj 000000C230D8F534	   - 39���� ������ �ӽð�ü�� �ּҰ��� ������ !�ָ�!
Destroy obj: 000000C230D8F534  - tempref�� �����ϴ� �ӽð�ü �Ҹ�
Destroy obj: 000000C230D8F514  - 34���� obj�Ҹ�
*/