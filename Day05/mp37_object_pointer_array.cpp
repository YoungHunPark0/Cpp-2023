//객체 포인터 배열
//ObjPtrArr
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//배열포인터 = 포인터
//포인터배열 = 배열
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // 생성자
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person() // 배열 생성시 필요한 생성자를 추가!
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) // 원하는 데이터로의 초기화를 목적으로 정의된 함수
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person* parr[3]; // 포인터 배열(==배열) 선언. 배열형태인데 *포인터 연산 사용
	// 객체주소값 3개를 저장할 수 있는 배열. 각각방에는 객체 포인터가 저장되어야함
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age; // cin에다가 이름,나이 저장
		parr[i] = new Person(namestr, age); // 객체를 생성, 객체 주소값을 배열에 저장
	}

	parr[0]->ShowPersonInfo();// 객체포인터로 메소드에 접근할때는 ' -> 사용 '
	parr[1]->ShowPersonInfo();// 객체로 메소드에 접근할때는 참조연산자 ' . 사용'
	parr[2]->ShowPersonInfo();
	delete parr[0]; // 총 3회에 걸쳐서 new연산 진행했으니, 총3회에 걸쳐 delete연산 진행
	delete parr[1];
	delete parr[2];

	return 0;
}