// 사용자 정의 자료형인 구조체 : C
#include <stdio.h>

struct human // 구조체 이름이 휴면
{
	char name[20];
	int age;
};

int main()
{
	// char h;
	struct human h = { "홍길동", 23 }; // 구조체human 타입의 구조체변수h 선언!. 초기값을 적어줄때는 중괄호{}사용
	
	printf("이름: %s\n", h.name); // h라는 구조체변수에 있는 name에 접근
	printf("나이: %d\n", h.age);
	return 0;
}
// 구조체 설계, 변수를만들고, 접근하는방법