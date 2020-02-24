#include <iostream>

int main(void)
{
	int sellingprice;
	int pay;

	do
	{
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin>>sellingprice;	
		
		if (sellingprice == -1)
			break;
		
		pay=50+sellingprice*0.12;
		std::cout<<"이번 달 급여: "<<pay<<"만원"<<std::endl; 
	} while(true);

	std::cout<<"프로그램을 종료합니다."<<std::endl;
	return 0;	
} 
