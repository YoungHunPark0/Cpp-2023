#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
/* class
속성: 멤버변수
기능: 멤버함수
*/
class Human { // 객체를 생성하면 객체별로 스택에 할당됨
	char name[20]; // 배열선언 
	int id; // 학번,주민번호는 char형태 배열선언 하는게 맞음
	int age;	// 일반자료형 int float 등 매개변수 활용하기 편함
public: // 외부에서 접근가능 
	// 생성자 사용으로 setdata 들고와서 setdata는 더이상 안쓰니 주석처리
	Human(const char aname[20], int aid, int aage/*매개변수*/) {
		strcpy_s(name, aname);
		id = aid;
		age = aage;
	}
//생성자를 사용할려면 초기값을 주기 위해서 메소드를 작성해야됨
	/*
	void setData(const char aname[20], int aid, int aage(매개변수)) {
		//setdata = data를 설정한다라고 명확히 알 수 있음
		// 선언돼있는 배열에 문자를 집어넣을려면
		// 1. 배열선언 할때 초기화를 한다.(char name[20]="홍길동";)
		// 2. strcpy 사용하기. 오류시(const, strcpy_s)
		//strcpy_s(name, aname); 
		//id = aid;
		//age = aage;
	}
	*/
	void getData() {
		cout << "이름: " << name <<", " << "학번: " << id <<", " << "나이: " << age << endl;
	}
};

int main()
{
	//Human.h; 생성자 선언했기때문에 
	Human h("홍길동", 1, 30); ;
	//h.setData(("홍길동", 1, 30);
	h.getData(); // 출력
	return 0;
}