// 단항연산자의 오버로딩
#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) { }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator++() // ++연산자가 멤버함수의 형태로 오버로딩됨
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	friend Point& operator--(Point& ref); // 24행 정의된 전역함수에 대해 friend 선언
};

Point& operator--(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main()
{
	/*
	Point pos(1, 2);
	++pos; // ++연산자 멤버함수형태 오버라이딩 -> pos.operator++(); 로 해석됨
	pos.ShowPosition();
	--pos; // ++연산자 멤버함수형태 오버라이딩 -> operator--(pos); 로 해석됨
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();
	*/
	int num = 10;
	cout << num++ << endl;
	cout << ++num << endl;

	return 0;
}