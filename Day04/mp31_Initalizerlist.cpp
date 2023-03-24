/*
콜론 초기화가 필요한 경우
1. 상수 멤버변수, 2. 객체맴버변수, 3. 참조 멤버변수, (4. 멤버변수)
*/
#include <iostream>
using namespace std;
class ConstSome {
public:
	const int val;	// 상수 멤버변수
	ConstSome(int n): val(n){} // 상수초기화 할때는 콜론초기화 : 
	void printval() {
		std::cout << val << std::endl;
	}
};

class RefSome {
public:
	int& ref;  // 참조 멤버변수. 참조일때 & 사용
	RefSome(int n):ref(n){} 
	void printval() {
		std::cout << ref << std::endl;
	}
};
class Position {
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};
class ObjSome {
public:
	Position pos; // 객체 멤버변수
	ObjSome(int ax, int ay) : pos(ax, ay) {}  // O
	void printval() {
		std::cout << pos.x << " " << pos.y << std::endl;
	}
};
int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printval();

	ObjSome o(10, 20);
	o.printval();

	return 0;
}