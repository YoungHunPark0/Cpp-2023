#include <iostream>
using namespace std;

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };
	printf("ary 전체크기: %d\n", sizeof(ary));
	int* pary = ary;

	printf("ary 주소: %p\n", ary); // 배열주소는 배열 첫번째방(시작주소)와 동일/ 000000366C2FFC78
	printf("ary[0] 주소: %p\n", &ary[0]); // 0번방의 주소를 읽어올려면 & 주소연산자 사용해야됨/ 000000366C2FFC78
	printf("ary + 1: %p\n", ary + 1); // ary라는 포인터에서 포인터연산에 +1하면 -> 4byte 증가/ 0000008E753BF5EC
	printf("ary[1] 주소: %p\n", &ary[1]); // 주소값 0000008E753BF5EC
	
	printf("pary 주소: %p\n", &pary); // 0000009FEDFCFBF8
	printf("pary 값: %p\n", pary); // 0000009FEDFCFBC8
	printf("pary[0] 주소: %p\n", &pary[0]); // 000000AEF20FFA68
	printf("pary[0] 값: %d\n", pary[0]); // 1
	printf("pary[0] 값: %d\n", *pary); // 1, *간접참조
	printf("pary[0] 값: %d\n", *(pary+1)); // 2


	return 0;
}