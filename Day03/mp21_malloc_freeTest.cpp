// 메모리 동적할당(C언어 타입)
// malloc 함수를 통해서 힙영역에 메모리공간을 할당하고 free 함수를 통해서 할당을 해제한다
// malloc함수는 인자로 정수 를 받고 반환형은 void* 보이드형 포인터이다
// malloc(4);  힙 영역에 4바이트 크기 공간할당 하고 그곳의 주소값 반환
// malloc(12);  힙 영역에 12바이트 크기 공간할당 하고 그곳의 주소값 반환​​

#include <iostream>
using namespace std;

int main()
{
	int* arr; //포인터 사용하면 포인터 선언하기
	int size;

	printf("배열방의 갯수: ");
	// scanf 함수가 취약하니 scanf_s를 사용하거나 _CRT_SECURE_NO_WARNINGS 를 사용하라고 합니다
	scanf_s("%d", &size);	// c는 scanf로 입력을 받을 때는 주소연산자가 필요하다
	//arr = malloc(sizeof(int));
	arr = (int*)malloc(sizeof(int)); // heap이라는 메모리영역에 할당
	//arr = (int*)malloc(20); //이렇게 지정해서 해도됨
	printf("만들어진 배열 크기: %d\n", sizeof(int)*size); // sizeof(arr)크기 8// int 20
	printf("%d\n", sizeof(int)); // 4

	free(arr);	// 메모리 해제

	return 0;
}