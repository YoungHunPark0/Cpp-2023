// 클래스 기본 필수
#include <iostream>
using namespace std;
class Mycalu {
private:
	int num1;
	int num2;
public: // 생성자로 초기화한다. (콜론초기화 == 초기화리스트)
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