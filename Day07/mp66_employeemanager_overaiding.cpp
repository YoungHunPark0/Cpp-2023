#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100]; // 배열선언
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const // 메소드. const 함수 상수화
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee // public지시자가 붙으면 부모클래스의 private까지 다 사용가능
{
private:
	int salary; // 월급여
public:
	PermanentWorker(const char*name, int money):Employee(name), salary(money) { } 
	// : 뒷부분 부모의 생성자 호출. 실행시 값을 들고 11행 부모클래스로 가서 실행
	int GetPay() const // 인자
	{
		return salary; // 속성
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker :public Employee
{
private:
	int workTime; // 이달에 일한 시간의 합계
	int payPerHour; // 시간당 급여
public:
	TemporaryWorker(const char* name,int pay): Employee(name), workTime(0), payPerHour(pay) { }
	void AddWorkTime(int time) // 일한시간 추가
	{
		workTime += time;
	}
	int GetPay() const // 이달의 급여
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult; // 월 판매실적
	double bonusRatio; // 상여금 비율
public:
	SalesWorker(const char*name, int money, double ratio):PermanentWorker(name,money), salesResult(0), bonusRatio(ratio){ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() // permanentwork의 getpay 함수 호출
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const // 상속에서 동일한 이름이 있으면 오버라이딩
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl; // SalesWorker의 getpay함수가 호출됨
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0) { }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		/*
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowYourName(); 
			*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
			*/
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5); // 5시간 일할 결과 등록
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // 영업실적 7000
	handler.AddEmployee(seller);

	// 이번달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}

// 부모의 포인터로 자식의 객체를 연결할 수 있다.

// 배열포인터, 포이터배열
/*
* 배열포인터는 포인터인데 배열을 가리키는 포인터
* 포인터배열은 배열인데 포인터로 이루어진 배열
* 
* 1. 포인터배열
* int n1 = 10, n2 = 20, n3 = 30;
* int* ary[3] = {&n1, &n2, &n3}; // 나는 배열인데 3개의 주소값을 저장 할 수 있는 배열입니다.
* 
* 2. 배열포인터
* int* pa = &a; 포인터선언  // int pa = a;- 변수선언 
* int ary[3] = {1, 2, 3}; // 배열이름 == 주소, 주소를 저장할 수 있는 것 == 포인터
* int (*pary) = ary[3];   // 1차원 배열포인터. 나는포인터입니다 = 1차원 배열을 가리키는 배열포인터
* int arr[2][3] = {{1, 2, 3}, {4, 5, 6}} // 2차원배열. 3개의 원소로 이루어진 배열
* int (*pary)[3] = arr; // 2차원 배열을 가리키는 배열포인터
*/