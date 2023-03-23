#include <iostream>
using namespace std;

class Myclass {
	// 접근제한 지정. 외부에서의 접근을 차단시킨다 -> 정보은닉
private: // 클래스내에서만 접근허용. 외부접근 불허함(95%)
	int privite_val;
public:	// 외부에서 접근가능함(100%). 어디서든 접근허용
	int public_val; 
protected: // 상속관계에서만 접근허용
	int protected_val; // 3개의 변수 선언

public: // public설정 안해주면 get을 사용할 수 없음!. 멤버함수는 무조건 public 선언!
	void set(int an) {
		privite_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "privite_val: " << privite_val << endl;
	}
};

int main()
{
	Myclass o; // myclass 타입의 객체o 생성
	o.public_val = 100; // 외부접근 가능!
	//o.private_val; 클래스내에서만 접근허용
	//o.protected_val; 상속관계에 놓였을 때, 유도클래스에서 접근허용
	o.set(200);

	o.get(); // public설정 안해주면 get을 사용할 수 없음!
	
	return 0;
}