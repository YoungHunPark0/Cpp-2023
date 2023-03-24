#include <iostream>
using namespace std;
// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉,은폐)
class Myclass {
	// 멤버변수:속성
private: // 외부접근차단, public은 외부접근 가능하기에 class특징인 은닉,은폐에 위배돼서 잘안나옴
	int id; // num
	char age; // ch
	char name[10]; //arr[]//private- 특징,값을 가진것들
	// 멤버함수(=메소드): 기능. 클래스내의 함수만 가능하기에 메소드를 통해서 접근하는 것이 클래스
public:
	void set(char aid, int aage, const char *aname)
		// set- 뭔가를 설정하는 형태, 초기화형태로 선언. 매개변수를 인수로 받아야함
	{
		id = aid;	// 원형만 만들고 , 메소드정의는 밖으로 뺴야함
		age = aage;
		strcpy_s(name, 10, aname); // 문자열은 strcpy_s
		//name = *aname; 이렇게 하면 에러남. strcpy_s사용하기
	}
	void get() // 초기화 시킨 것들을 <출력>하는형태
	{
		cout << id <<' '<< name <<' '<< age << endl;
	}
};

int main()
{
	Myclass s;
	s.set('2', 23, "홍길동");
	s.get();
	return 0;
}