#include"../ProblemSolving/2562/2562.h"

void p2562::p2562Solving()
{
	std::vector<int> vec = std::vector<int>(); 
	int biggestvalue = 0;
	int number = 0;

	// ���� 9�� �Է¹ޱ�
	for (int i = 0; i < 9; ++i)
	{
		int temp = 0;
		std::cin >> temp; 
		vec.emplace_back(temp);
	}

	// ���� �� �� ����
	for (int i = 0; i < 9; ++i)
	{
		if (biggestvalue < vec[i])
		{
			biggestvalue = vec[i];
			number = i + 1;
		}
	}

	// ���
	std::cout << biggestvalue << std::endl;
	std::cout << number << std::endl;
}
