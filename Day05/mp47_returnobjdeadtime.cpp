// 객체의 생성과 소멸
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{
		cout << "생성자 호출" << endl;
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "복사생성자 호출" << endl;
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/* 출력값
생성자 호출
New Object: 000000C230D8F514 - 34행 obj생성
복사생성자 호출
New Copy obj: 000000C230D8F614 - 35행 함수호출로 인한 26행의 매개변수 ob의 생성
Parm ADR: 000000C230D8F614 - 28행 실행을 통해서
복사생성자 호출
New Copy obj: 000000C230D8F654 - 29행의 반환으로 인한 임시객체 생성
Destroy obj: 000000C230D8F614 - 매개변수 ob의 소멸
Destroy obj: 000000C230D8F654 - 29행의 반환으로 생성된 임시객체 소멸

복사생성자 호출
New Copy obj: 000000C230D8F674 - 38행 함수호출로 인한 26행의 매개변수 ob의 생성
Parm ADR: 000000C230D8F674	   - 28행의 실행
복사생성자 호출
New Copy obj: 000000C230D8F534 - 29행의 반환으로 인한 임시객체 생성
Destroy obj: 000000C230D8F674  - 매개변수 ob의 소멸
Return Obj 000000C230D8F534	   - 39행의 실행결과 임시객체의 주소값과 동일함 !주목!
Destroy obj: 000000C230D8F534  - tempref가 참조하는 임시객체 소멸
Destroy obj: 000000C230D8F514  - 34행의 obj소멸
*/