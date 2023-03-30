#include <iostream>
namespace mystd // cout와 endl을 직접구현하기 위해서 선언한 이름공간
{
	using namespace std; 

	class ostream
	{
	public:
		void operator<<(const char* str){printf("%s", str);}
		void operator<<(char str){printf("%c", str);}
		void operator<<(int num){printf("%d", num);}
		void operator<<(double e){printf("%g", e);}
		void operator<<(ostream& (*fp)(ostream& ostm)){fp(*this);}
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}

	ostream cout;
}

int main()
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String";
	cout << endl;
	cout << 3.14;
	cout << endl;
	cout << 123;
	endl(cout);

	return 0;
}