#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2; // string객체간 덧셈연산, operator +연산자 오버로딩으로 인해 가능한것

	cout << str1 << endl; // << 연산자에 대해서도 오버로딩
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	string str4;
	cout << "문자열 입력: ";
	cin >> str4; // >> 연산자에 대해서도 오버로딩됨
	cout << "입력한 문자열: " << str4 << endl;

	return 0;
}