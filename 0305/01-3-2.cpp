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
	// 오버로딩은 만족하나 인자를 전달하지 않으면서 함수 호출하는 경우, 두 함수 모두 호출조건을 만족하기 때문에 컴파일 에러가 발생 
	std::cout<<"Call SimpleFunc: SimpleFunc()"<<SimpleFunc()<<std::endl;
	return 0;
}
