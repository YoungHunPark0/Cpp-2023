#include <iostream>

int main()
{
	char ch[5] = "hong"; // ĳ�������� �迭����. ���ڿ��迭�� �������� null���� ����־ ����ְ� ���� ��+1 �������. 
	ch[0] = 'h'; // ���ڸ� �ϳ��� �濡 ��������ͻ� ���ڿ��� �ƴ϶� �������� null���� �ʿ����// �����ϳ��� ����
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	//printf("char ũ��: %d\n", sizeof(char)); // ������ byte. ĳ�������� ũ��� 1byte
	//printf("%s\n", ch);
	// �迭�����ϰ� ���� ���� ���� �ʱ�ȭ�� ������.
	//printf("ch[4] : %c\n", ch[4]);
	//printf("cha[4] : %s\n", ch[4]);
	printf("�迭�̸� ch: %p", ch);
	printf("�迭�ּ� ch: %p", &ch); //�ּҿ����� &

	return 0;
}

// �迭�� �ּ�! �迭 ����� for��!