// ���׿������� �����ε�
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
	Point& operator++() // ++�����ڰ� ����Լ��� ���·� �����ε���
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	friend Point& operator--(Point& ref); // 24�� ���ǵ� �����Լ��� ���� friend ����
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
	++pos; // ++������ ����Լ����� �������̵� -> pos.operator++(); �� �ؼ���
	pos.ShowPosition();
	--pos; // ++������ ����Լ����� �������̵� -> operator--(pos); �� �ؼ���
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