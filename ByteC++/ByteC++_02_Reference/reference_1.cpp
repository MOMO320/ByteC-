#include <iostream>

// change_val �Լ��� ���� p�� number�� �ּҰ��� �����Ͽ�,
int change_val(int* p)
{
	// *p�� ���� number�� �����Ͽ� number�� ���� 3���� �ٲپ����ϴ�.
	*p = 3;

	return 0;
}

// C������ ��� ������ ����Ű�� ���� �� �ݵ�� �����͸� ����ؾ߸� �߽��ϴ�.
// �׷��� C++������ �ٸ� ������ ����� ����Ű�� ������� �� �ٸ� �ݽ��� �����ϴµ�,
// �̸� �ٷ� ������(���۷��� - reference) ��� �θ��ϴ�.
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