#include "p10818.h"


p10818::p10818()
{
}


p10818::~p10818()
{
}

void p10818::p10818Solving(void)
{
	// 0. 기본적으로 가지고 있어야할 정보들
	long biggestnumber = -1000000;
	long smallestnumber = 1000000;

	// 1. 정수 입력
	long temp = 0;
	std::cin >> temp;

	// 2. 입력받은 정수의 개수만큼 정수 입력 / 입력받자마자 비교
	for (long i = 0; i < temp; ++i)
	{
		long temp2 = 0;
		std::cin >> temp2;

		if (temp2 > biggestnumber)
			biggestnumber = temp2;

		if (temp2 < smallestnumber)
			smallestnumber = temp2;
	}

	// 3. 출력
	std::cout << smallestnumber << " " << biggestnumber; 
}
