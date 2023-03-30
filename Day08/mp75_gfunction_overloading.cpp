#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0):xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	friend Point operator+(const Point& pos1, const Point& pos2);
	// 18행 함수에 대해 private영역 접근허용하기 위해서 friend 선언
};

Point operator+(const Point& pos1, const Point& pos2)//+연산자를 전역함수형태로 오버로딩. friend선언으로 private사용가능
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2; // +연산자가 전역함수형태 오버로딩됨, +연산은 'operator+(pos1, pos2)'로 해석됨

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}