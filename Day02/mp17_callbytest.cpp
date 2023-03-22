// 값에 의한 호출(Call-by-value), 참조에 의한 호출(Call-by-reference)
#include <iostream>

/* 1번째
int main()
{
	int n1 = 10;
	int n2 = 20;

	printf("변경 전 n1: %d \t n2: %d\n", n1, n2); //  n1: 10   n2: 20
	int temp = n1;
	n1 = n2;
	n2 = n1;
	n2 = temp;

	printf("변경 후 n1: %d \t n2: %d\n", n1, n2); //  n1: 20   n2: 10

	return 0;
}
*/
/* 2번째 함수 구현
void swap(int n1, int n2) // n1 n2의 값을 바꾸는 함수를 만들어야함
{
	int temp; // temp라는 변수를 선언해줘야함. 선언안하면 바뀐값이 아닌 같은값만 나옴
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1: %d \t n2: %d\n", n1, n2);
}
int main()
{
	int n1 = 10, n2 = 20;
	
	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);
	swap(n1, n2);
	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);

	return 0;
}
*/
// 3번째 포인터로 구현 : call by reference 참조에 의한 호출
void swap(int* pn1, int* pn2) // main에서 swap이 주소연산자 사용했으니 포인터연산자 *로 바꿔줘야함
{
	int temp; // temp라는 변수를 선언해줘야함. 선언안하면 바뀐값이 아닌 같은값만 나옴
	temp = *pn1; // 포인터값을 temp에 집어넣어라
	*pn1 = *pn2;
	*pn2 = temp;
	//printf("n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);
	swap(&n1, &n2);
	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);

	return 0;
}