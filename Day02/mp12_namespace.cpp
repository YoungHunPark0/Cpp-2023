/* 1. �̸�����(namespace) Ư�������� �̸��� �ٿ��ֱ� ���� ���������. ����) �Լ��̸��� �������̴�.
#include <iostream>

namespace BestConImpl // BestConImpl �̸��� ��������. �ȿ� �Լ� SimpleFunc����. ���� BestConImpl::SimpleFunc��Ī��
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}
namespace ProgComImpl // ���͵���
{
	void SimpleFunc(void) 
	{
		std::cout << "ProgCom�� �������Լ�" << std::endl;
	}
}
int main()
{
	BestConImpl::SimpleFunc(); // BestConImpl���� ���� ���ǵ� �Լ� SimpleFunc�� ȣ�⹮��.
	ProgComImpl::SimpleFunc();
	return 0;
}
*/
/*2. �̸����� ����� �Լ� ����� ������ ����
#include <iostream>

namespace BestComImpl // �̸����� �ȿ� �Լ����� ����
{
	void SimpleFunc(void);
}

namespace ProgComImpl // �̸����� �ȿ� �Լ����� ����
{
	void SimpleFunc(void);
}

int main() // main�Լ� ������ �Լ�����! ���α׷��� ������ �Ʒ���
{
	BestComImpl::SimpleFunc(); 
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) // �̸�����-BestComImpl�� ����� �Լ� SimpleFunc�� ���Ǻκ�. ::�����ڴ� �Լ�ȣ�� �ܿ��� ����
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
*/
/*3. ������ �̸������� ���ǵ� �Լ�ȣ�� �� ���� �̸������� ����� �ʿ䰡 ����. 2�� ���� ���ݺ����� ����
#include <iostream>

namespace BestComImpl	// �̸������� �� �̻� �������� ������ ���𰡴�. ���� �� ���� ���ϰ������� �����
{
	void SimpleFunc(void);
}
namespace BestComImpl	// �̸������� �� �̻� �������� ������ ���𰡴�. ���� �� ���� ���ϰ������� �����
{
	void PrettyFunc(void);
}
namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();				// ���� �̸����� 
			// void BestComImpl::SimpleFunc(void)���ǵ� �Լ��� ������ �̸������� ���ǵ� �Լ�. �̷��� ����ȣ���� ����
	ProgComImpl::SimpleFunc();  // �ٸ� �̸����� 
					// �Լ��� ȣ����ġ�� ���, progCom�̸������� ���ǵ��Լ� simple�� ȣ���ϴ� ������� ���̰� ����.
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
*/
// 4. �̸������� ��ø : �̸������� �ٸ� �̸����� �ȿ� ���Ե� �� �ִ�.
#include <iostream>

namespace Parent
{
	int num = 2;

	namespace SubOne

	{
		int num = 3;
	}
	namespace SubTwo
	{
		int num = 4;
	}
}
int main()
{
	std::cout << Parent::num << std::endl;			// 2
	std::cout << Parent::SubOne::num << std::endl;  // 3
	std::cout << Parent::SubTwo::num << std::endl;  // 4
	return 0;
}

// �� ����� �̸������� �ٸ��⿡ �浹�� �Ͼ�� ����.