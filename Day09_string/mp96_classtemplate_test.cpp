#include <iostream>
using namespace std;

template <typename T> // 클래스 템플릿 일반화
class CTest
{
private:
	T data; // 템플릿에서는 기본자료형 int data 안됨->T
public:
	CTest(T adata):data(adata){}
	T getData() // 출력도 T 붙여야함
	{
		return data; // 클래스에 있는 멤버변수 data 출력
	}
};
/*
template <>			// 클래스 템플릿 특수화
class CTest<char>
{
private:
	char data;
public:
	CTest(char adata):data(adata){}
	char getData() 
	{
		return data;
	}
};
*/
int main()
{
	// 정수출력 생성자 만들기
	CTest<int> obj(10);
	cout << obj.getData() << endl;
	// 문자출력 생성자 만들기
	CTest<char> obj1('a');
	cout << obj1.getData() << endl;

	return 0;
}