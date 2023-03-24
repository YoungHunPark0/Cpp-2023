// 소멸자
// 계속 인스턴스 오류뜸. 해결방법: #define _CRT_SECURE_NO_WARNINGS 헤드 추가, const char* myname char를 상수화 시켜줌
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // const 상수화
	{
		int len = strlen(myname) + 1; // 불필요한 메모리 공간 낭비, 부족을 막기위해 문자열 길이만큼 메모리공간을 동적할당하고 있음
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person() // 소멸자
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}