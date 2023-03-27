#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human { 
	char* name; // 포인터형태 선언. 메모리 동적할당 받음 
	Human ary[10]; // 배열인데 타입이 객체. 각각 방하나마다, human클래스 타입의 객체를 저장할 수 있음.
	int id; // 학번,주민번호는 char형태 배열선언 하는게 맞음
	int age;	// 일반자료형 int float 등 매개변수 활용하기 편함
public: // 외부에서 접근가능 
	// 생성자 사용으로 setdata 들고와서 setdata는 더이상 안쓰니 주석처리
	Human(const char *aname, int aid, int aage/*매개변수*/) {
		// new를 통해서 힙영역에 할당
		name = new char[strlen(aname) + 1];  
		//메모리 동적할당 받을 크기(char=1byte), 형태 만들어줘야함
		// strlen : 포인터에서 저장된 문자열 크기 알려줌. +1 하는이유는 크기가 딱맞으면 안되기때문
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	// 소멸자 : 객체를 소멸시킴. 동적할당 받은걸 없애줘야함-delete
	~Human(){
		delete[] name; // 배열형태 name 소멸
	} // 소멸자 : 객체를 소멸시킴. 동적할당 받은걸 없애줘야함-delete


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
		cout << "이름: " << name << ", " << "학번: " << id << ", " << "나이: " << age << endl;
	}
};

int main()
{
	//Human.h; 생성자 선언했기때문에 
	Human h("홍길동", 1, 30); ;
	//h.setData(("홍길동", 1, 30);
	h.getData(); // 출력
	
	// 객체배열 생성. 배열형태로 구현가능
	Human hary[3] = { Human("김영희", 2, 23), Human("김철수",3,25), Human("아무개",4,35) };
	//출력
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}