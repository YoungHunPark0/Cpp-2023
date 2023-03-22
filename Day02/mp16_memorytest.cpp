#include <iostream>

int g = 0;			// 전역변수
void func()
{
	printf("func() : %p\n", func);
}
int main()
{
	int n = 10;		// main함수안에 속해있는 지역변수
	static int c;
	const int d = 10; // 지역변수 - stack에 저장
	char ary[10] = "hi"; // 지역형태 배열 - stack 저장

	func();						  // 00007FF6113D13CF
	printf("local n : %p\n", &n); // 000000E6F25AF634
	printf("global g: %p\n", &g); // 00007FF6113DC170
	printf("static c : %p\n", &c);// 00007FF6113DC174
	printf("const d : %p\n", &d); // 000000E6F25AF654
	printf("array : %p\n", ary);  // 000000E6F25AF678

	return 0;
}
/*
메모리영역은 크게나누면
1. 코드세그먼트 
- printf()
- func()
- main()
2. 데이터세그먼트
공적데이터 
- stack - [int] [x] [10]
- 힙
정적데이터 
- printf("static c : %p\n", &c)
- ex) printf("func() : %p\n", func). printf("문자열") 인것들 
- 상수, 프로그램 시작부터 죽을때까지 있는것들
*/