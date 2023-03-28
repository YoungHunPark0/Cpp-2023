#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl; // Girl�̶�� Ŭ������ �̸��� �˸� // Ŭ������ ���� ����

class Boy
{
private:
	int height;
	friend class Girl; // Girl Ŭ������ ���� friend ���� // private�������� friend���� ����
public:
	Boy(int len): height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn); // ���� ���ǵ������� GirlŬ���� ����. 
		// �׷����� �ұ��ϰ� �������� ������ ������ 6�࿡�� �̸��� �˷ȱ� ����
};

class Girl // Girl Ŭ���� ����. BoyŬ������ showyourfriendinfo �Լ��� ���ǵǱ⿡ �ռ� ��������!
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy; // boyŬ���������� friend����
};

void Boy::ShowYourFriendInfo(Girl& frn) // �����Ϸ� 35���� ������ �������ϱ� ���ؼ���, GirlŬ������
// ������� phNum�� �����Ѵٴ� ��Ǿ˱�!, �׷��� ���Լ����ǰ� GirlŬ���� ���Ǻ��� �ڿ� ��ġ�Ѱ�
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) // BoyŬ������ �ռ� ���ǵǾ �����Ϸ��� boyŬ������
										// ������� height�� �������� ��! ���� �������� �����ϵ�
{
	cout << "His height: " << frn.height << endl;
}
int main()
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}