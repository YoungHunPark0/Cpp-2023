/* �޸𸮵����Ҵ� c++ Ÿ��(new, delete)
#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "�迭�� ������ �Է��ϼ��� : ";
	cin >> size;
	// c++���� �޸��Ҵ�
	arr = new int[size]; // heap������ �������� �����ּҸ� �Ҵ�// �����ͺ����� ���� ����־����// ���� ����
	
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "��° ���� : ";
		cin >> arr[i];
	}

	delete[] arr;

	return 0;
}
*/
/* MemMalFree.�������� ���ڸ� �޾Ƽ�,
//�ش������ ���ڿ� ������ ������ �迭 �����ϰ� �迭�� �ּҰ��� ��ȯ�ϴ� �Լ��� �����غ���
#include <iostream>
#include <string.h>	// c++���� c��� ������� �߰�����.
#include <stdlib.h>
using namespace std;

#pragma warning(disable:4996) 

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char)*len); // ���ڿ� ������ ���� �迭�� �������� �Ҵ�
	return str;
}
int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);	// ���� �Ҵ�� �޸� ������ �Ҹ�
	return 0;
}
*/
//MemMalFree.cpp�� �����Ͽ� new�� delete�� ��뿹
// NewDelete
// New = ������ ȣ��, Delete = �Ҹ��� ȣ��
#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable:4996) //c��� �������� �����÷ο� �߻��ϱ� ������ ���

char* MakeStrAdr(int len)
{
//	char* str = (*char)malloc(sizeof(char) * len);
	char* str = new char[len]; // �ܼ����ϴ��� new�� �̿��� �����Ҵ��� �ξ� �������� �� �� �ִ�
	return str;
}
int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);	// ���� �Ҵ�� �޸� ������ �Ҹ�
	delete[]str; // �迭�� ���·� �Ҵ�� �޸� ������ ����
	return 0;
}