#include <iostream>
using namespace std;

class Person
{
public:
	void personf() { cout << "personf" << endl; }
};

class Student : public Person
{
public:
	void ptstudentf() { cout << "ptstudentf" << endl; }
};

class PartimeStudent : public Student // partimestudent 는 student 클래스도 간접상속 받고있음
{
public:
	void studentf() { cout << "studentf" << endl; }
};

int main()
{
	Person* ptr1 = new Student();	// super -> sub
	Person* ptr2 = new PartimeStudent(); // super -> sub
	Student* ptr3 = new PartimeStudent(); // super -> sub
	ptr1->personf();
	ptr2->personf();
	ptr3->ptstudentf();

	PartimeStudent* ptr = new PartimeStudent();
	ptr->personf();
	ptr->ptstudentf();
	ptr->studentf();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}