#include <iostream>

int main()
{
	int size;
	int* arr;
	printf("�迭����: ");
	scanf_s("%d", &size); 
	// ����� ��Ʃ������� scanf �Լ��� ����ϴ� scanf_s�� ����ϰų� _CRT_SECURE_NO_WARNINGS �� ����϶����

	arr = (int*)malloc(sizeof(int) * size);

	printf("%d���� ���ڸ� �Է��Ͻÿ�.\n", size);
	for (int i = 0; i < size; i++) {
		printf("%d��° ����: ", i + 1);
		scanf_s("%d", arr + i); // ���濡 ����ִ� ����
	}
	//���
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}
	
	free(arr); // �Ҵ��ѰͿ� ���ؼ� ����������

	return 0;
}