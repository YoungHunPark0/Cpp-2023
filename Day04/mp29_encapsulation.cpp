// ĸ��ȭ
// Encaps1
#include <iostream>
using namespace std;

class SinivelCap // �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl;}
};

class SneezeCap // ��ä�� óġ�� ĸ�� // Ŭ���� ����
{
public:
	void Tack() const { cout << "��ä�Ⱑ �½��ϴ�." << endl;}
};

class SnuffleCap // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl;}
};

class ColdPatient // ����ȯ�� Ŭ���� ����. ġ�Ḧ ���� �ռ� ������ Ŭ���� ��ü�� �����ؾߵ�
{
public:
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take();}
	void TackSneezeCap(const SneezeCap& cap) const { cap.Tack();}
	void TackSnuffleCap(const SnuffleCap& cap) const { cap.Take();}
};

int main()
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap); // �ڰ��� óġ�� ���� �๰��ä���ڸ��� ġ�Ḧ ���� ĸ���� ������� �����ؾ���
	sufferer.TackSneezeCap(zcap);
	sufferer.TackSnuffleCap(ncap);
	return 0;
}