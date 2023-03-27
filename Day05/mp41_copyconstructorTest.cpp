// 복사 생성자
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char *name): num(n){// 콜론초기화
		std::cout << "생성자 호출" << std::endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	} 
	explicit Myclass(Myclass& other) { //&참조형태, other 다른객체참조
		std::cout << "복사생성자 호출" << std::endl;
		//this->name = other.name;
		this->name = new char(strlen(other.name) + 1);
		strcpy(this->name, other.name); // 깊은복사
		this->num = other.num;
	}
	void getData() {
		std::cout << num << std::endl;
	}
	~Myclass() {
		std::cout << "메모리 해제" << std::endl;
		delete[] this->name;
	}
};
/*
int main()
{	
	Myclass m1(1, "홍길동");		// 생성자 호출
	//Myclass m2 = m1;	// 복사생성자 호출. int형태 num2를 생성. int num2 = num1의 값을 집어넣어라
	Myclass m3(m1);		// 복사생성자 호출. 
	// 복사생성자의 매개변수는 참조형태. 객체타입이오면 무한루프빠져버림

	m1.getData();
	//m2.getData();
	m3.getData();

	return 0;
}
*/
int func(int n)
{
	std::cout << "함수호출" << std::endl;
	return n + 1;
}
int main()
{
	int num = 10;
	int res;
	res = func(num);

	return 0;
}