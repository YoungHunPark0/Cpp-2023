/*참조자(Reference)
#include <iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int& num2 = num1; // num1에 대한 참조자 num2선언. num1과 num2 동일한 메모리 공간 참조
	
	num2 = 3047;
	cout << "VAL: " << num1 << endl; // 동일값이 출력되면 num1,num2가 동일한 메모리공간참조 증명
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}
*/
/*참조자의 선언가능 범위 refarrelem.배열요소는 변수로 간주되어 참조자의 선언 가능
#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 1,3,5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;
	return 0;
}
*/ 
/*refptr.포인터 변수도 변수이기 때문에 참조자 선언가능
#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr; // ptr 포인터변수(주소값들어있음)형태 참조자로 만듬. pref 참조자선언해서 pref이름으로 접근가능
	int** (&dpref) = dptr; // ** 이중포인터. 포인터변수의 주소를 저장하는 변수

	cout << ref << endl;
	cout << *pref << endl; // pref는 포인터변수 ptr의 참조자이므로 변수 num에 저장된 값 출력
	cout << **dpref << endl; // dpref는 포인터변수 dptr참조자이므로 변수 num에 저장된 값 출력
	return 0;
}
*/
// call-by-address? call-by-reference(참조자)!. refswap
#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1; // ref1, ref2에 저장된값 교환과정. main함수에 선언된 변수 val1, val2의 교환으로 이어짐
	ref1 = ref2;
	ref2 = temp;
}
int main()
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2); // 매개변수로 참조자 선언되었으니, 참조대상이 될 변수를 인자로 전달하면됨
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}