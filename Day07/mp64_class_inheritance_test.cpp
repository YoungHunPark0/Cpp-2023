#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person { // 사람이라는 클래스
private:
	char name[30]; // 사람의 이름
	int age; // 사람의 나이
public:
	Person(const char* aname, int myage); //정의는 외부에서 해보기
	void getData(); // 출력
};

class Student:public Person // public타입(99%)으로 부모타입 클래스를 상속!
{
private:
	int studentId; // 새로만든 속성에 정보를 집어넣어야 하니, 생성자를 생성!-> 부모클래스에서 정보를 상속
public:
	// ()안에 부모클래스 3개의 값이 필요함
	Student(const char* aname, int myage, int myid);
	void ShowData(); // 상속에서의 오버라이딩=>재정의
// 오버라이딩:상속관계에서 클래스 이름은 같지만 값은 다름
// 오버로딩: 상속관계가 아닌데 함수이름이 같을때=>다중정의

};

Person::Person(const char* aname, int myage) {
	age = myage;
	strcpy(name, aname);
}

void Person::getData()
{
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
}

Student::Student(const char* aname, int myage, int myid) :Person(aname, myage), studentId(myid){ }

void Student::ShowData()
{
	cout << "아이디: " << studentId << endl;
}

int main()
{
	Person p("박영훈", 20);
	Student s("박영훈", 20, 1234);
	p.getData();
	s.ShowData();
	return 0;
}
// 크기로보면 부모클래스가 크지만
// 자식클래스로 내려올수록 많은 특성(속성)을 필요로함
// 접근할 수 있는 타입은 부모클래스타입
// 자식클래스 내에서도 부모클래스타입(상속받은것) 메소드가 있음.
// 자식클래스에도 순수한 메소드가 있는데 이건 접근안됨
