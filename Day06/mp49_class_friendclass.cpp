#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl; // Girl이라는 클래스의 이름을 알림 // 클래스도 선언 가능

class Boy
{
private:
	int height;
	friend class Girl; // Girl 클래스에 대한 friend 선언 // private영역에도 friend선언 가능
public:
	Boy(int len): height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn); // 아직 정의되지않은 Girl클래스 등장. 
		// 그럼에도 불구하고 컴파일이 가능한 이유는 6행에서 이름을 알렸기 때문
};

class Girl // Girl 클래스 정의. Boy클래스의 showyourfriendinfo 함수가 정의되기에 앞서 등장했음!
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy; // boy클래스에대한 friend선언
};

void Boy::ShowYourFriendInfo(Girl& frn) // 컴파일러 35행이 제데로 컴파일하기 위해서는, Girl클래스에
// 멤버변수 phNum이 존재한다는 사실알기!, 그래서 이함수정의가 Girl클래스 정의보다 뒤에 위치한것
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) // Boy클래스가 앞서 정의되어서 컴파일러는 boy클래스에
										// 멤버변수 height가 존재함을 암! 따라서 무리없이 컴파일됨
{
	cout << "His height: " << frn.height << endl;
}
int main()
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}