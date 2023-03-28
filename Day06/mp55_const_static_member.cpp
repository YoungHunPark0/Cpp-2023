#include <iostream>
using namespace std;

class CountryArea // 국가별 면적크기 저장해놓은 클래스. 이렇듯 const static 상수는 하나의 클래스에
				// 둘이상 모이는것이 보통이다!
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main()
{
	cout << "러시아 면적: " << CountryArea::RUSSIA << "㎢" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "㎢" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "㎢" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "㎢" << endl;
	return 0;
}
// 8~11행에 정의된 상수에 접근하기 위해서 굳이 객체를 생성할 필요는 없다.