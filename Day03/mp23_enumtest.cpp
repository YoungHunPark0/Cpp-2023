/* enum 상수 선언
#include <stdio.h>

enum week
{
	sun = 0,
	mon = 1,
	tue, // 안적어도 자동으로 2
	wed // 3 매칭
};
int main()
{
	printf("%d\n", sun); // 0
	printf("%d\n", mon); // 1
	printf("%d\n", tue); // 2
	printf("%d\n", wed); // 3
	return 0;
}
*/