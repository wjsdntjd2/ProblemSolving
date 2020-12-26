#include"p4344.h"
void p4344::p4344Solving()
{
	int temp = 0;
	std::cin >> temp;
	double* arr = new double[temp];
	for (int i = 0; i < temp; i++)
	{
		int temp2 = 0;
		double count = 0;
		double avg = 0;
		std::cin >> temp2;
		double* arr2 = new double[temp2];
		for (int j = 0; j < temp2; j++)
		{
			std::cin >> arr2[j];
			avg += arr2[j];
		}
		avg /= temp2;
		for (int j = 0; j < temp2; j++)
		{
			if (avg < arr2[j])
			{
				count++;
			}
		}
		arr[i] = count / temp2 * 100;
	}
	std::cout << std::fixed;
	std::cout.precision(3);
	for (int i = 0; i < temp; i++)
	{
		std::cout << arr[i] << "%" << std::endl;
	}
}