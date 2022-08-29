#include <iostream>

// change_val 함수의 인자 p에 number의 주소값을 전달하여,
int change_val(int* p)
{
	// *p를 통해 number를 참조하여 number의 값을 3으로 바꾸었습니다.
	*p = 3;

	return 0;
}

// C언어에서는 어떠한 변수를 가르키고 싶을 때 반드시 포인터를 사용해야만 했습니다.
// 그런데 C++에서는 다른 변수나 상수를 가리키는 방법으로 또 다른 반식을 제공하는데,
// 이를 바로 참조자(레퍼런스 - reference) 라고 부릅니다.
int change_val2(int& p)
{
	p = 10;
	return 0;
}

int main1()
{
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
	change_val2(number);
	std::cout << number << std::endl;

	return 0;
}