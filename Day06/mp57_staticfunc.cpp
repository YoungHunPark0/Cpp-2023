#include <iostream>

class StaticTest {
private:
	static int a; // 멤버변수의 static, 초기화가 클래스 밖에서 이루어져야함
	int b;
public: // a,b에 접근하기위해서
	StaticTest(); // 생성자
	static void setData(int aa /*초기값*/);
	void print();
};
int StaticTest::a = 10; // static멤버변수 초기화
StaticTest::StaticTest()
{
	this->b = 20;
}
void StaticTest::setData(int aa)
{
	//this->a = 30;// static멤버는 객체포인터로 접근할 수 없다
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