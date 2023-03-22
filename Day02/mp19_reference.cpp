/*������(Reference)
#include <iostream>
using namespace std;

int main()
{
	int num1 = 1020;
	int& num2 = num1; // num1�� ���� ������ num2����. num1�� num2 ������ �޸� ���� ����
	
	num2 = 3047;
	cout << "VAL: " << num1 << endl; // ���ϰ��� ��µǸ� num1,num2�� ������ �޸𸮰������� ����
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}
*/
/*�������� ���𰡴� ���� refarrelem.�迭��Ҵ� ������ ���ֵǾ� �������� ���� ����
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
/*refptr.������ ������ �����̱� ������ ������ ���𰡴�
#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr; // ptr �����ͺ���(�ּҰ��������)���� �����ڷ� ����. pref �����ڼ����ؼ� pref�̸����� ���ٰ���
	int** (&dpref) = dptr; // ** ����������. �����ͺ����� �ּҸ� �����ϴ� ����

	cout << ref << endl;
	cout << *pref << endl; // pref�� �����ͺ��� ptr�� �������̹Ƿ� ���� num�� ����� �� ���
	cout << **dpref << endl; // dpref�� �����ͺ��� dptr�������̹Ƿ� ���� num�� ����� �� ���
	return 0;
}
*/
// call-by-address? call-by-reference(������)!. refswap
#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp = ref1; // ref1, ref2�� ����Ȱ� ��ȯ����. main�Լ��� ����� ���� val1, val2�� ��ȯ���� �̾���
	ref1 = ref2;
	ref2 = temp;
}
int main()
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2); // �Ű������� ������ ����Ǿ�����, ��������� �� ������ ���ڷ� �����ϸ��
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}