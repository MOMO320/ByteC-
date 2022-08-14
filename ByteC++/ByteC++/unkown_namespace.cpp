#include <iostream>

// ◆ 이름 없는 이름 공간
// c++에서는 이름 공간에 굳이 이름을 설정하지 않아도 됩니다.
// 이 경우 해당 이름 공간에 정의된 것들은 해당 파일 안에서만 접근할 수 있게 됩니다.
// 이 경우 마치 static 키워드를 사용한 것과 같은 효과를 냅니다.
namespace {
	int only_in_this_file = 0;
	int OnlyInThisFile() { return only_in_this_file; }
}


int main1()
{
	// 해당 파일 안에서만 접근할 수 있습니다.
	// 헤더 파일을 통해서 위 파일을 받았다고 하더라고 저 익명의 namespace 안에 
	// 정의된 모든 것들은 사용할 수 없게 됩니다.
	OnlyInThisFile();

	std::cout << OnlyInThisFile() << std::endl;

	return 0;
}