// const »ó¼öÈ­
#include <iostream>

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}	// Call-by-value

void SwapByRef(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}	//Call-by-reference

int main()
{
	return 0;
}