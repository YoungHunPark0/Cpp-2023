#include <iostream>
using namespace std;
// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉,은폐)
class Myclass {
	// 멤버변수:속성
private: // 외부접근차단, public은 외부접근 가능하기에 class특징인 은닉,은폐에 위배돼서 잘안나옴
	char id; // num
	int age; // ch
	char name[10]; //arr[]//private- 특징,값을 가진것들
	// 멤버함수(=메소드): 기능. 클래스내의 함수만 가능하기에 메소드를 통해서 접근하는 것이 클래스
public: 
	Myclass(char aid, int aage, const char* aname); // 생성자
	void getData(); // 메소드 원형(선언)
	/*
	void set(char aid, int aage, const char* aname)
		// set- 뭔가를 설정하는 형태, 초기화형태로 선언. 매개변수를 인수로 받아야함
	{
		id = aid;	// 원형만 만들고 , 메소드정의는 밖으로 뺴야함
		age = aage;
		strcpy_s(name, 10, aname); // 문자열은 strcpy_s
		//name = *aname; 이렇게 하면 에러남. strcpy_s사용하기
	}
	
	void getData() // 초기화 시킨 것들을 <출력>하는 형태// 
	{
		cout << id << ' ' << age << ' ' << name<< endl;
	}*/
};
Myclass::Myclass(char aid, int aage, const char* aname) { // 생성자 정의
	id = aid; 
	age = aage;
	strcpy_s(name, 10, aname);
}
// : id(aid), age(aage)=>이니셜라이저(Initializer), 콜론초기화: 생성자,메소드가 호출될 때(실행되기 전에) 실행되어 바로 초기화
void Myclass::getData() // 초기화 시킨 것들을 <출력>하는형태// :: 어디소속인지 밝히는 연산자. 
{
	cout << id << ' ' << age << ' ' << name << endl;
}
int main()
{
	Myclass s('2', 23, "홍길동");
	// s.set('2', 23, "홍길동"); 생성자 정의하면서 생성자안에 속해짐
	s.getData();
	return 0;
}