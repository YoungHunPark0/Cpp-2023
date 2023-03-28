#include <iostream>
using namespace std;

class Point; // 14,15행 실행할려면 Point가 클래스 이름을 컴파일러에게 알려줘야함
			// 그런데 Point클래스는 뒤에서 등장하기에 별도로 Point클래스의 이름을 선언함
class PointOP
{
private: 
	int opcnt;
public:
	PointOP() : opcnt(0)
	{ }

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{ }
	friend Point PointOP::PointAdd(const Point&, const Point&); //point클래스의 멤버함수 add,sub에대해 friend 선언
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&); //58행에 정의된 함수 showpointpos에 대해 friend선언
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y); // add,sub는 point클래스의 friend선언->private멤버 접근가능
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main()
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));
	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", "; // showpointpos함수도 point클래스의 friend로 선언->private멤버 접근가능
	cout << "y: " << pos.y << endl;
}