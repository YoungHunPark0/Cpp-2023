#include <iostream>

int main()
{
	int size;
	int* arr;
	printf("배열개수: ");
	scanf_s("%d", &size); 
	// 비쥬얼 스튜디오에서 scanf 함수가 취약하니 scanf_s를 사용하거나 _CRT_SECURE_NO_WARNINGS 를 사용하라고함

	arr = (int*)malloc(sizeof(int) * size);

	printf("%d개의 숫자를 입력하시오.\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d번째 숫자: ", i + 1);
		scanf_s("%d", arr + i); // 각방에 집어넣는 형태
	}
	//출력
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}
	
	free(arr); // 할당한것에 대해서 해제시켜줌

	return 0;
}