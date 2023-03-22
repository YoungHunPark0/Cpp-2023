/* 1. 이름공간(namespace) 특정영역에 이름을 붙여주기 위한 문법적요소. 참고) 함수이름도 포인터이다.
#include <iostream>

namespace BestConImpl // BestConImpl 이름의 공간생성. 안에 함수 SimpleFunc정의. 따라서 BestConImpl::SimpleFunc지칭함
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}
namespace ProgComImpl // 위와동일
{
	void SimpleFunc(void) 
	{
		std::cout << "ProgCom이 정의한함수" << std::endl;
	}
}
int main()
{
	BestConImpl::SimpleFunc(); // BestConImpl공간 내에 정의된 함수 SimpleFunc의 호출문장.
	ProgComImpl::SimpleFunc();
	return 0;
}
*/
/*2. 이름공간 기반의 함수 선언과 정의의 구분
#include <iostream>

namespace BestComImpl // 이름공간 안에 함수선언만 삽입
{
	void SimpleFunc(void);
}

namespace ProgComImpl // 이름공간 안에 함수선언만 삽입
{
	void SimpleFunc(void);
}

int main() // main함수 위에는 함수선언! 프로그램은 위에서 아래로
{
	BestComImpl::SimpleFunc(); 
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) // 이름공간-BestComImpl에 선언된 함수 SimpleFunc의 정의부분. ::연산자는 함수호출 외에도 사용됨
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
*/
/*3. 동일한 이름공간에 정의된 함수호출 할 때는 이름공간을 명시할 필요가 없음. 2번 예제 조금변경한 예제
#include <iostream>

namespace BestComImpl	// 이름공간은 둘 이상 영역으로 나뉘어 선언가능. 물론 이 둘은 동일공간으로 선언됨
{
	void SimpleFunc(void);
}
namespace BestComImpl	// 이름공간은 둘 이상 영역으로 나뉘어 선언가능. 물론 이 둘은 동일공간으로 선언됨
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
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();				// 동일 이름공간 
			// void BestComImpl::SimpleFunc(void)정의된 함수와 동일한 이름공간에 정의된 함수. 이렇게 직접호출이 가능
	ProgComImpl::SimpleFunc();  // 다른 이름공간 
					// 함수의 호출위치가 어떻든, progCom이름공간에 정의된함수 simple을 호출하는 방법에는 차이가 없음.
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
*/
// 4. 이름공간의 중첩 : 이름공간은 다른 이름공간 안에 삽입될 수 있다.
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

// 각 선언된 이름공간이 다르기에 충돌이 일어나지 않음.