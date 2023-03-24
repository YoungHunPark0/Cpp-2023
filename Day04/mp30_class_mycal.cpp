// Ŭ���� �⺻ �ʼ�
#include <iostream>
using namespace std;
class Mycalu {
private:
	int num1;
	int num2;
public: // �����ڷ� �ʱ�ȭ�Ѵ�. (�ݷ��ʱ�ȭ == �ʱ�ȭ����Ʈ)
	Mycalu(int n1,int n2);
	
	void add();	
	void sub();
	void mul();
	void div();
};

Mycalu::Mycalu(int n1, int n2) : num1(n1), num2(n2)
{
}
void Mycalu:: add() {
	cout << num1 + num2 << endl;
}
void Mycalu::sub() {
	cout << num1 - num2 << endl;
}
void Mycalu::mul() {
	cout << num1 * num2 << endl;
}
void Mycalu::div() {
	try {
		if (num2 == 0) throw num2;
		cout << float(num1) / float(num2) << endl;
	}
	catch (int exception) {
		cout << "Zero Division" << endl;
	}
}
int main()
{
	Mycalu m(123, 456);
	m.add();
	m.sub();
	m.mul();
	m.div();
	return 0;
}