#include <iostream>

int main(void)
{
	char name[100];
	char pnum[100];
	
	std::cout<<"�̸��� �Է��ϼ���: ";
	std::cin>>name;
	
	std::cout<<"��ȭ��ȣ�� �Է��ϼ���: ";
	std::cin>>pnum;
	
	std::cout<<std::endl;
	std::cout<<"------------------------------"<<std::endl;
	std::cout<<"��    ��: "<<name<<std::endl;
	std::cout<<"��ȭ��ȣ: "<<pnum<<std::endl;	
	return 0;
}
