#include <iostream>
using namespace std;
class Myclass
{
private:
	int value;
public:
	Myclass(int avalue):value(avalue){}
	Myclass operator+ (const Myclass& other) {
		return Myclass(value + other.value);
	}
	
	void print()
	{
		cout << value << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();
	
	Myclass c = b;
	c.print();

	Myclass d = a + b + c;
	d.print();

	return 0;
}