#include "header1.h"
#include "header2.h"
#include <iostream>

// �Ʒ� ���� �ǹ� : header1�̶� �̸� ������ ����ִ� print �Լ��� ���Ŵ�
using header1::print;
// �Ʒ� ���� �ǹ� : �⺻������ header1 �̸� �����ȿ� ���ǵ� ��� �͵��� header1:: ���� ����� �� �̴�.
using namespace header1;

// �⺻������ std ������ �ϴ°��� ��ȣ ���� �ʴ´�. 
// ������ std ���̺귯���� ����ϱ� ������ �Լ����� ��ġ�� ���� ���� ������ �߻��� �� �ֱ� �����̴�.
// �׷��⿡ std ���� ���ٴ� std:: �� �̿��Ͽ� ��� �Լ��� ����ϴ°��� ����.
using namespace std;

int main()
{
	// std�� C++ ǥ�� ���̺귯���� ��� �Լ� ��ü ���� ���ǵ� �̸� ����(namespace) �Դϴ�.

	// �� �̸� ����(namespace)��?
	// �̸� ������ ���״�� � ���ǵ� ��ü�� ���� ��� �Ҽ����� �������ִ� �Ͱ� ���� �մϴ�.

	// ����ϴ� ����
	// �ڵ��� ũ�Ⱑ �þ�� ����, Ȥ�� �ٸ� ������� �� �ڵ带 ������ ���� ��찡 �������鼭
	// �ߺ��� �̸��� ���� �Լ����� ���������ϴ�.
	// ���� �̸� �����ϱ� ���� ���� �̸��̶� �Ҽӵ� �̸������� �ٸ��� �ٸ� ������ ����ϰ� �˴ϴ�.
	std::cout << "hello world!" << std::endl;

	header2::print();	// header2�� �ִ� �Լ� ȣ��

	print();			// header1�� �ִ� �Լ� ȣ��

	//���� 2
	std::cout << "hi" << std::endl
		<< "my name is"
		<< "YYH" << std::endl;

	return 0;
}