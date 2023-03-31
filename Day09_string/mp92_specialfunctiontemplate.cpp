#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}
template <>
char* Max(char* a, char* b) // 함수템플릿 max를 char*형에 대해서 특수화
{
	cout << "char Max>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b) //함수템플릿 max를 const char*형에 대해서 특수화
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main()
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; // 문자열 선언으로 인해서 반환주소값의 포인터형은 const char*, 이문장 호출함수 18~23행 max함수

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;// str1,str2는 변수형태 선언. str1,str2의 포인터형 char*. 호출함수 11~16행 max함수

	return 0;
}