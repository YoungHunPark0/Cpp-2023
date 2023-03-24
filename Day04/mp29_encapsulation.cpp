// 캡슐화
// Encaps1
#include <iostream>
using namespace std;

class SinivelCap // 콧물 처치용 캡슐
{
public:
	void Take() const { cout << "콧물이 싹~ 납니다." << endl;}
};

class SneezeCap // 재채기 처치용 캡슐 // 클래스 정의
{
public:
	void Tack() const { cout << "재채기가 맞습니다." << endl;}
};

class SnuffleCap // 코막힘 처치용 캡슐
{
public:
	void Take() const { cout << "코가 뻥 뚫립니다." << endl;}
};

class ColdPatient // 감기환자 클래스 정의. 치료를 위해 앞서 정의한 클래스 객체를 복용해야됨
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
	sufferer.TakeSinivelCap(scap); // 코감기 처치를 위해 콧물재채기코막힘 치료를 위한 캡슐을 순서대로 복용해야함
	sufferer.TackSneezeCap(zcap);
	sufferer.TackSnuffleCap(ncap);
	return 0;
}