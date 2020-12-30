#include"p2739.h"
void p2739::p2739Solving()
{
	int num;
	std::cin >> num;
	for (int i = 1; i < 10; i++)
	{
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}