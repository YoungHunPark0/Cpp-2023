/* 1. using�� �̿��� �̸������� ���
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
	using Hybrid::HybFunc; // using�� �̿��ؼ� hybrid�̸������� ���ǵ� hybfunc�� ȣ���ҋ��� 
							//�̸������� �������� �ʰ� ȣ���ϰڴٴ� ���� ���(����)��
	HybFunc();		// using������ ���ؼ� �̸����� �������� hybfunc �Լ��� ȣ����
	return 0;
}
*/
// 2. �̸����� std�� ����� ��� �Ϳ� ���� �̸����� ������ ������ ����� �� ����
#include <iostream>
using namespace std; // ����¥�� using namespace ���� ����

int main()
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}