/* RefRetFuncOne
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}
int main()
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);	// RefRetFuncOne함수가 참조자를 반환했고, 다시 참조자에 저장하고 있음
	
	num1++;		// 변수 num1과 참조자 num2의 값을 1씩 증가시키고 있다
	num2++;
	cout << "num1: " << num1 << endl; // 변수 num1과 참조자 num2의 관계를 확인하기위한 출력
	cout << "num2: " << num2 << endl;

	return 0;
}
*/
/* RefOneFuncTwo
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)	//RefRetFuncOne.pp의 RefRetFuncOne과 동일
{
	ref++;
	return ref;
}
int main()
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);	// 참조형이 반환이 되지만, 이렇듯 참조자가 아닌 일반변수를 선언해서
	// 반환값을 저장할 수 있다. 중요한점은 int=num1=1;의 num1과 int num2 = RefRetFuncOne(num1)의 num2는 완전히 별개변수

	num1 += 1;	// num1과 num2가 다른변수임을 확인하기 위해서 서로다른 연산을 진행함
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/
// RefRetFuncThree
#include <iostream>
using namespace std;

int RefRetFuncTwo(int& ref)	//반환형이 기본자료형 int이다. 출력이 기본자료형이면 무조건 기본자료형
{
	ref++;
	return ref;	// 참조자를 반환하지만, 반환형이 기본자료형 int! 참조자가 참조하는 변수값이 반환됨. 변수에 저장된값이 반환됨
}
int main()
{
	int num1 = 1; 
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;	// num1과 num2가 다른변수임을 확인하기 위해서 서로다른 연산을 진행함
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}