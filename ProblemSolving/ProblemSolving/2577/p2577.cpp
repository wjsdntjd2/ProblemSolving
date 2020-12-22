#include"p2577.h"

void p2577::p2577Solving()
{
	int arr[3] = { 0 };
	int arr2[10] = { 0 };
	int result = 1;

	for (int i = 0; i < 3; i++)
	{
		int temp = 0;
		std::cin >> temp;
		arr[i] = temp;
		result *= arr[i];
	}

	while (result != 0)
	{
		arr2[result % 10] += 1;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr2[i] << std::endl;
	}
}