#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100]; // �迭����
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const // �޼ҵ�. const �Լ� ���ȭ
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee // public�����ڰ� ������ �θ�Ŭ������ private���� �� ��밡��
{
private:
	int salary; // ���޿�
public:
	PermanentWorker(const char*name, int money):Employee(name), salary(money) { } 
	// : �޺κ� �θ��� ������ ȣ��. ����� ���� ��� 11�� �θ�Ŭ������ ���� ����
	int GetPay() const // ����
	{
		return salary; // �Ӽ�
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
	int workTime; // �̴޿� ���� �ð��� �հ�
	int payPerHour; // �ð��� �޿�
public:
	TemporaryWorker(const char* name,int pay): Employee(name), workTime(0), payPerHour(pay) { }
	void AddWorkTime(int time) // ���ѽð� �߰�
	{
		workTime += time;
	}
	int GetPay() const // �̴��� �޿�
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
	int salesResult; // �� �ǸŽ���
	double bonusRatio; // �󿩱� ����
public:
	SalesWorker(const char*name, int money, double ratio):PermanentWorker(name,money), salesResult(0), bonusRatio(ratio){ }
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() // permanentwork�� getpay �Լ� ȣ��
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const // ��ӿ��� ������ �̸��� ������ �������̵�
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl; // SalesWorker�� getpay�Լ��� ȣ���
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
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// �ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5); // 5�ð� ���� ��� ���
	handler.AddEmployee(alba);

	// ������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000); // �������� 7000
	handler.AddEmployee(seller);

	// �̹��޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹��޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}

// �θ��� �����ͷ� �ڽ��� ��ü�� ������ �� �ִ�.

// �迭������, �����͹迭
/*
* �迭�����ʹ� �������ε� �迭�� ����Ű�� ������
* �����͹迭�� �迭�ε� �����ͷ� �̷���� �迭
* 
* 1. �����͹迭
* int n1 = 10, n2 = 20, n3 = 30;
* int* ary[3] = {&n1, &n2, &n3}; // ���� �迭�ε� 3���� �ּҰ��� ���� �� �� �ִ� �迭�Դϴ�.
* 
* 2. �迭������
* int* pa = &a; �����ͼ���  // int pa = a;- �������� 
* int ary[3] = {1, 2, 3}; // �迭�̸� == �ּ�, �ּҸ� ������ �� �ִ� �� == ������
* int (*pary) = ary[3];   // 1���� �迭������. �����������Դϴ� = 1���� �迭�� ����Ű�� �迭������
* int arr[2][3] = {{1, 2, 3}, {4, 5, 6}} // 2�����迭. 3���� ���ҷ� �̷���� �迭
* int (*pary)[3] = arr; // 2���� �迭�� ����Ű�� �迭������
*/