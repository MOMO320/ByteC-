#include <iostream>

// �� �̸� ���� �̸� ����
// c++������ �̸� ������ ���� �̸��� �������� �ʾƵ� �˴ϴ�.
// �� ��� �ش� �̸� ������ ���ǵ� �͵��� �ش� ���� �ȿ����� ������ �� �ְ� �˴ϴ�.
// �� ��� ��ġ static Ű���带 ����� �Ͱ� ���� ȿ���� ���ϴ�.
namespace {
	int only_in_this_file = 0;
	int OnlyInThisFile() { return only_in_this_file; }
}


int main1()
{
	// �ش� ���� �ȿ����� ������ �� �ֽ��ϴ�.
	// ��� ������ ���ؼ� �� ������ �޾Ҵٰ� �ϴ���� �� �͸��� namespace �ȿ� 
	// ���ǵ� ��� �͵��� ����� �� ���� �˴ϴ�.
	OnlyInThisFile();

	std::cout << OnlyInThisFile() << std::endl;

	return 0;
}