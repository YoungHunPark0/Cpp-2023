/* 1. using을 이용한 이름공간의 명시
#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple Function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main()
{
	using Hybrid::HybFunc; // using을 이용해서 hybrid이름공간에 정의된 hybfunc를 호출할떄는 
							//이름공간을 지정하지 않고 호출하겠다는 것을 명시(선언)함
	HybFunc();		// using선언을 통해서 이름공간 지정없이 hybfunc 함수를 호출함
	return 0;
}
*/
// 2. 이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령할 수 있음
#include <iostream>
using namespace std; // 한줄짜리 using namespace 선언 삽입

int main()
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}