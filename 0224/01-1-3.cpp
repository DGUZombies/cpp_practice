#include <iostream>

int main(void)
{
	int dan;
	
	std::cout<<"���ڸ� �Է��ϼ���: ";
	std::cin>>dan;
	
	std::cout<<"-------"<<dan<<" �� ���"<<"-------"<<std::endl;
	for (int i=1;i<10;i++)
		std::cout<<dan<<"��"<<i<<"="<<dan*i<<std::endl;

	return 0;
}
