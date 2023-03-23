/* 메모리동적할당 c++ 타입(new, delete)
#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "배열의 개수를 입력하세요 : ";
	cin >> size;
	// c++에서 메모리할당
	arr = new int[size]; // heap영역에 만들어놓은 시작주소를 할당// 포인터변수를 만들어서 집어넣어야함// 방을 지정
	
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 숫자 : ";
		cin >> arr[i];
	}

	delete[] arr;

	return 0;
}
*/
/* MemMalFree.길이정보 인자를 받아서,
//해당길이의 문자열 저장이 가능한 배열 생성하고 배열의 주소값을 반환하는 함수를 정의해보자
#include <iostream>
#include <string.h>	// c++에서 c언어 헤드파일 추가가능.
#include <stdlib.h>
using namespace std;

#pragma warning(disable:4996) 

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char)*len); // 문자열 저장을 위한 배열을 힙영역에 할당
	return str;
}
int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);	// 힙에 할당된 메모리 공간을 소멸
	return 0;
}
*/
//MemMalFree.cpp를 변경하여 new와 delete의 사용예
// NewDelete
// New = 생성자 호출, Delete = 소멸자 호출
#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable:4996) //c언어 문법사용시 버퍼플로우 발생하기 때문에 사용

char* MakeStrAdr(int len)
{
//	char* str = (*char)malloc(sizeof(char) * len);
	char* str = new char[len]; // 단순비교하더라도 new를 이용한 동적할당이 훨씬 간결함을 알 수 있다
	return str;
}
int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);	// 힙에 할당된 메모리 공간을 소멸
	delete[]str; // 배열의 형태로 할당된 메모리 공간의 해제
	return 0;
}