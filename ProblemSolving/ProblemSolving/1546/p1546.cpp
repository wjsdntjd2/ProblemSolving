#include "p1546.h"
#include<stdio.h>
void p1546::p1546Solving()
{

	int num = 0;
	double max = 0;
	double total = 0;

	//첫째 줄에 시험 본 과목의 개수 N이 주어진다. 
	std::cin >> num;

	//둘째 줄에 세준이의 현재 성적이 주어진다.
	//모든 점수에 점수/최고점수*100
	double *arr = new double[num];

	for (int i = 0; i < num; i++)
	{
		std::cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < num; i++)
	{
		arr[i] = arr[i] / max * 100;
		total += arr[i];
	}
	total /= num;

	std::cout << total << std::endl;
}