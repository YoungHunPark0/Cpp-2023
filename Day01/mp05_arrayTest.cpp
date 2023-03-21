#include <iostream>

int main()
{
	char ch[5] = "hong"; // 캐릭터형태 배열선언. 문자열배열은 마지막에 null값이 들어있어서 집어넣고 싶은 값+1 해줘야함. 
	ch[0] = 'h'; // 문자를 하나씩 방에 집어넣은것뿐 문자열이 아니라서 마지막에 null값이 필요없음// 문자하나씩 저장
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	//printf("char 크기: %d\n", sizeof(char)); // 단위는 byte. 캐릭터형태 크기는 1byte
	//printf("%s\n", ch);
	// 배열생성하고 값을 넣을 때는 초기화를 시켜줌.
	//printf("ch[4] : %c\n", ch[4]);
	//printf("cha[4] : %s\n", ch[4]);
	printf("배열이름 ch: %p", ch);
	printf("배열주소 ch: %p", &ch); //주소연산자 &

	return 0;
}

// 배열은 주소! 배열 제어문은 for문!