#include <iostream>

int main(void)
{
	int sellingprice;
	int pay;

	do
	{
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin>>sellingprice;	
		
		if (sellingprice == -1)
			break;
		
		pay=50+sellingprice*0.12;
		std::cout<<"�̹� �� �޿�: "<<pay<<"����"<<std::endl; 
	} while(true);

	std::cout<<"���α׷��� �����մϴ�."<<std::endl;
	return 0;	
} 
