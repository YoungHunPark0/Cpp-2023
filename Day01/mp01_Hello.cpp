#include <iostream>

int main(void)	// 함수머리: 출력이 있으면 void(빈, 아무것도없는)오면 안됨 main()->출력 함수이름(입력), 정수(int),문자(char, str)
{				// 함수시작(함수 몸체)
	int num = 20; // 변수 선언. num은 어떤변수? -> 지역변수 - {}안에 선언해서. 끝나면 소멸됨. 
	// int=4byte. 32bit. (ex 1byte = 8bit). 스택에 4byte크기 할당. 
	// 메모리에 num이라는 이름으로 접근함. 이름없으면 포인터써야함.
	std::cout << "Hello World!!" << std::endl; // std::cout<<"Hello " << "World!" << std::endl;
	std::cout << num << std::endl; // 20. endl(endline) = 대행시키는 기능
	std::cout << num << 'A';
	std::cout << "hi" << std::endl; // 20Ahi
	return 0;	// 리턴
}				// 함수 끝

// = : 대입연산자. ex 20 = num; 될까?-> 20은 상수(변하지않는값)이여서 저장할 공간 x
// 대입연산자 = 왼쪽에는 값을 저장할 수 있는 공간이 와야함, 변수도 가능(변수에 저장된 값만)