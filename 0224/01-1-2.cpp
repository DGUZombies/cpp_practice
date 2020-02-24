#include <iostream>

int main(void)
{
	char name[100];
	char pnum[100];
	
	std::cout<<"이름을 입력하세요: ";
	std::cin>>name;
	
	std::cout<<"전화번호를 입력하세요: ";
	std::cin>>pnum;
	
	std::cout<<std::endl;
	std::cout<<"------------------------------"<<std::endl;
	std::cout<<"이    름: "<<name<<std::endl;
	std::cout<<"전화번호: "<<pnum<<std::endl;	
	return 0;
}
