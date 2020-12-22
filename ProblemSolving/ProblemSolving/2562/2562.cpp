#include"2562.h"

void p2562::p2562Solving()
{
	int arr[9] = {};
	int biggestvalue = 0;
	int number = 0;

	// 정수 9개 입력받기
	for (int i = 0; i < 9; ++i)
	{
		int temp = 0;
		std::cin >> temp; 
		arr[i] = temp;
	}

	// 정수 비교 후 저장
	for (int i = 0; i < 9; ++i)
	{
		if (biggestvalue < arr[i])
		{
			biggestvalue = arr[i];
			number = i + 1;
		}
	}

	// 출력
	std::cout << biggestvalue << std::endl;
	std::cout << number << std::endl;
}
