#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator*(int times)// * 곱셈연산자 오버로딩, point객체와 정수간 곱셈 가능
	{
		Point pos(xpos * times, ypos * times); // 곱배수만큼 x,ypos값 증가된 point객체 생성 반환 형태로 연산자 오버로딩
		return pos;
	}
};

int main()
{
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3; // pos.operator*(3)으로 해석됨.
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}