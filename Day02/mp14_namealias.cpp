// 이름공간 별칭 지정. 이름공간이 중첩되면서 과도하게 사용되었을 때
#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;		// 별칭이 선언되기 이전 변수 num1, num2의 접근이 보이고있음
	AAA::BBB::CCC::num2 = 30;
	
	namespace ABC = AAA::BBB::CCC;  // AAA::BBB::CCC에 ABC라는 별칭을 붙여줌
	cout << ABC::num1 << endl;		// 별칭선언 이후의 접근
	cout << ABC::num2 << endl;
	return 0;
}