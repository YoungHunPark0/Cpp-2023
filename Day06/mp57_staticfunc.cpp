#include <iostream>

class StaticTest {
private:
	static int a; // ��������� static, �ʱ�ȭ�� Ŭ���� �ۿ��� �̷��������
	int b;
public: // a,b�� �����ϱ����ؼ�
	StaticTest(); // ������
	static void setData(int aa /*�ʱⰪ*/);
	void print();
};
int StaticTest::a = 10; // static������� �ʱ�ȭ
StaticTest::StaticTest()
{
	this->b = 20;
}
void StaticTest::setData(int aa)
{
	//this->a = 30;// static����� ��ü�����ͷ� ������ �� ����
	a == aa;
}
void StaticTest::print()
{
   	std::cout << "a: " << "' " << "b: " << b << std::end;
}
int main()
{
	StaticTest s1, s2
	s1.print();
	s2.print();
	
	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();
	return 0;
}