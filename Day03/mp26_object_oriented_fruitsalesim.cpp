// 객체지향. FruitSaleSim
#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "남는 사과" << numOfApples << endl;
		cout << "판매 수익" << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;	// private: // 클래스 내에서 접근제어 지시자 생략되어서 이둘은 private로 간주됨
	int numOfApples; // private:

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) 
	{
		numOfApples += seller.SaleApples(money); // 과일장수 대상으로 과일구매목적 saleapples함수 호출
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액" << myMoney << endl;
		cout << "사과 개수" << numOfApples << endl << endl;
	}
};
int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // 과일구매
	// BuyApples는 구매기능 함수. 구매대상과 구매금액 정보가 인자로 전달되도록 함수정의.
	cout << "과일 판매자 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}