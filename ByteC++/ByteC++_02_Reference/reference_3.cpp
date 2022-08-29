#include <iostream>
#include <stdio.h>

// ㅁ 포인터와 레퍼런스의 차이점
// 
//3. 레퍼런스는 메모리 상에 존재하지 않을 수 도 있다.
//	: 포인터의 경우를 생각해봅시다.우리가 아래와 같이 포인터 p를 정의 한다면
//
//	- int a = 10;
//-int* p = &a;	(p는 메모리 상에서 당당히 8 바이트를 차지하게 됩니다.
//
//	p는 당당히 메모리 상에서 8 바이트를 차지하는 녀석이 됩니다.
//	(물론 32비트 시스텐에서는 4바이트)
//
//	레퍼런스의 경우를 생각해 봅시다.
//
//	- int a = 10;
//-int& another_a = a; (another_a 가 자리를 차지할 필요가 있을까요 ? )
//
//만일 내가 컴파일러라면 another_a 를 위해서 메모리 상에 공간을 할당할 필요가 있을까요 ?
//아닙니다.왜냐하면 another_a 가 쓰이는 자리는 모두 a로 바꿔치기 하면 되니까요.
//따라서 이 경우 레퍼런스는 메모리상에 존재하지 않게 됩니다.
//물론 그렇다고 해서 항상 존재하지 않는 것은 아닙니다.

// 함수 인자로 레퍼런스 받기
// 아래 함수 내용 : 참조자 P에게 너는 앞으로 number의 새로운 별명이야 라고 알려주는것
// 여기서 중요한점은 포인터가 인자일 때와는 다르게 number앞에 &를 붙일 필요가 없습니다.
// 이를 참조자를 정의할 때 그냥 int& a = b; 와 같이 한 것과 일맥 상통 합니다.
int change_val(int& p)
{
	p = 3;

	return 0;
}

// C++ 문법 상 참조자의 참조자를 만드는 것은 금지

/*
	ㅁ 굳이 포인터가 아닌 참조자를 사용하는 이유
	: 참조자를 사용하게 되면 불필요한 &와 *가 필요없기 때문에 코드를 훨씬 간결하게 나타낼 수 있습니다.
*/

int main3()
{
	int number = 5;

	std::cout << number << std::endl;
	change_val(number);
	std::cout << number << std::endl;

	// 참고 예시
	// 모두 X의 참조자임(y, z)
	int x;
	int& y = x;
	int& z = y;

	x = 1;
	std::cout << "x : " << x << "y : " << y << "z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << "y : " << y << "z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << "y : " << y << "z : " << z << std::endl;


	int user_input;

	// 하지만 cin이라는 것에 그냥 user_input을 전달했는데 잘 작동합니다.
	// 그 이유는 cin이 레퍼런스로 user_input을 받아서 그렇습니다.
	// 따라서 &를 user_input 앞에 붙일 필요가 없습니다. (와우!!!)
	std::cin >> user_input;

	// C에서는 옆의 함수와 같이 항상 주소값을 전달해 주었습니다.
	// 왜냐하면 어떤 변수의 값을 다른 함수에서 바꾸기 위해서는 항상 포인터로 주소값을 전달해야하기 때문이죠.
	//scanf("%d", &user_input);  

	return 0;
}