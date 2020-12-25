#include"p8958.h"
#include<string.h>
void p8958::p8958Solving()
{
	char arr[100];
	int temp = 0;



	std::cin >> temp;

	int* arr2 = new int[temp];

	for (int i = 0; i < temp; i++)
	{
		int score = 0;
		int plus = 0;

		std::cin >> arr;
		for (int j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				plus++;
				score += plus;
			}
			else
			{
				plus = 0;
			}
		}
		arr2[i] = score;
	}

	for (int i = 0; i < temp; i++)
	{
		std::cout << arr2[i] << std::endl;
	}
}