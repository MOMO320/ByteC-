#include "header1.h"
#include "header2.h"
#include <iostream>

// 아래 선언 의미 : header1이란 이름 공간에 들어있는 print 함수만 쓸거다
using header1::print;
// 아래 선언 의미 : 기본적으로 header1 이름 공간안에 정의된 모든 것들을 header1:: 없이 사용할 것 이다.
using namespace header1;

// 기본적으로 std 선언을 하는것을 선호 하지 않는다. 
// 이유는 std 라이브러리는 방대하기 때문에 함수명이 겹치는 일이 생겨 오류가 발생할 수 있기 때문이다.
// 그렇기에 std 선언 보다는 std:: 를 이용하여 멤버 함수를 사용하는것이 좋다.
using namespace std;

int main()
{
	// std는 C++ 표준 라이브러리의 모든 함수 객체 등의 정의된 이름 공간(namespace) 입니다.

	// ◆ 이름 공간(namespace)란?
	// 이름 공간은 말그대로 어떤 정의된 객체에 대해 어디 소속인지 지정해주는 것과 동일 합니다.

	// 사용하는 이유
	// 코드의 크기가 늘어남에 따라, 혹은 다른 사람들이 쓴 코드를 가져다 쓰는 경우가 많아지면서
	// 중복된 이름을 가진 함수들이 많아졌습니다.
	// 따라서 이를 구분하기 위해 같은 이름이라도 소속된 이름공간이 다르면 다른 것으로 취급하게 됩니다.
	std::cout << "hello world!" << std::endl;

	header2::print();	// header2에 있는 함수 호출

	print();			// header1에 있는 함수 호출

	//문제 2
	std::cout << "hi" << std::endl
		<< "my name is"
		<< "YYH" << std::endl;

	return 0;
}