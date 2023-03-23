#include <iostream>
using namespace std;

class Myclass {
	// �������� ����. �ܺο����� ������ ���ܽ�Ų�� -> ��������
private: // Ŭ������������ �������. �ܺ����� ������(95%)
	int privite_val;
public:	// �ܺο��� ���ٰ�����(100%). ��𼭵� �������
	int public_val; 
protected: // ��Ӱ��迡���� �������
	int protected_val; // 3���� ���� ����

public: // public���� �����ָ� get�� ����� �� ����!. ����Լ��� ������ public ����!
	void set(int an) {
		privite_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "privite_val: " << privite_val << endl;
	}
};

int main()
{
	Myclass o; // myclass Ÿ���� ��üo ����
	o.public_val = 100; // �ܺ����� ����!
	//o.private_val; Ŭ������������ �������
	//o.protected_val; ��Ӱ��迡 ������ ��, ����Ŭ�������� �������
	o.set(200);

	o.get(); // public���� �����ָ� get�� ����� �� ����!
	
	return 0;
}