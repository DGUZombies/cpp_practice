#include <iostream>

int main(void)
{
	int dan;
	
	std::cout<<"숫자를 입력하세요: ";
	std::cin>>dan;
	
	std::cout<<"-------"<<dan<<" 단 출력"<<"-------"<<std::endl;
	for (int i=1;i<10;i++)
		std::cout<<dan<<"×"<<i<<"="<<dan*i<<std::endl;

	return 0;
}
