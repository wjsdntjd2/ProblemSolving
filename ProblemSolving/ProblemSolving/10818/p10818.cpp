#include "p10818.h"


p10818::p10818()
{
}


p10818::~p10818()
{
}

void p10818::p10818Solving(void)
{
	// 0. �⺻������ ������ �־���� ������
	long biggestnumber = -1000000;
	long smallestnumber = 1000000;

	// 1. ���� �Է�
	long temp = 0;
	std::cin >> temp;

	// 2. �Է¹��� ������ ������ŭ ���� �Է� / �Է¹��ڸ��� ��
	for (long i = 0; i < temp; ++i)
	{
		long temp2 = 0;
		std::cin >> temp2;

		if (temp2 > biggestnumber)
			biggestnumber = temp2;

		if (temp2 < smallestnumber)
			smallestnumber = temp2;
	}

	// 3. ���
	std::cout << smallestnumber << " " << biggestnumber; 
}
