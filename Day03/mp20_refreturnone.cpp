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
	int& num2 = RefRetFuncOne(num1);	// RefRetFuncOne�Լ��� �����ڸ� ��ȯ�߰�, �ٽ� �����ڿ� �����ϰ� ����
	
	num1++;		// ���� num1�� ������ num2�� ���� 1�� ������Ű�� �ִ�
	num2++;
	cout << "num1: " << num1 << endl; // ���� num1�� ������ num2�� ���踦 Ȯ���ϱ����� ���
	cout << "num2: " << num2 << endl;

	return 0;
}
*/
/* RefOneFuncTwo
#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)	//RefRetFuncOne.pp�� RefRetFuncOne�� ����
{
	ref++;
	return ref;
}
int main()
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);	// �������� ��ȯ�� ������, �̷��� �����ڰ� �ƴ� �Ϲݺ����� �����ؼ�
	// ��ȯ���� ������ �� �ִ�. �߿������� int=num1=1;�� num1�� int num2 = RefRetFuncOne(num1)�� num2�� ������ ��������

	num1 += 1;	// num1�� num2�� �ٸ��������� Ȯ���ϱ� ���ؼ� ���δٸ� ������ ������
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/
// RefRetFuncThree
#include <iostream>
using namespace std;

int RefRetFuncTwo(int& ref)	//��ȯ���� �⺻�ڷ��� int�̴�. ����� �⺻�ڷ����̸� ������ �⺻�ڷ���
{
	ref++;
	return ref;	// �����ڸ� ��ȯ������, ��ȯ���� �⺻�ڷ��� int! �����ڰ� �����ϴ� �������� ��ȯ��. ������ ����Ȱ��� ��ȯ��
}
int main()
{
	int num1 = 1; 
	int num2 = RefRetFuncTwo(num1);

	num1 += 1;	// num1�� num2�� �ٸ��������� Ȯ���ϱ� ���ؼ� ���δٸ� ������ ������
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}