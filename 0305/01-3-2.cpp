#include <iostream>
int SimpleFunc(int a=10)
{
	return a+1;
}

int SimpleFunc(void)
{
	return 10;
}

int main(void)
{
	// Call of overloaded 'SimpleFunc()' is ambiguous
	// �����ε��� �����ϳ� ���ڸ� �������� �����鼭 �Լ� ȣ���ϴ� ���, �� �Լ� ��� ȣ�������� �����ϱ� ������ ������ ������ �߻� 
	std::cout<<"Call SimpleFunc: SimpleFunc()"<<SimpleFunc()<<std::endl;
	return 0;
}
