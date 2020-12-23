#include "p3052.h"

void p3052::p3052Solving()
{
	int arr[10] = { 0 };
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		int temp = 0;
		std::cin >> temp;
		arr[i] = temp % 42;
	}
	
	for (int i = 0; i < 10; i++)
	{
		int a = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				a++;
			}
		}
		if (a == 0)
		{
			result++;
		}
	}

	std::cout << result << std::endl;
}
