#include "p1546.h"
#include<stdio.h>
void p1546::p1546Solving()
{

	int num = 0;
	double max = 0;
	double total = 0;

	//ù° �ٿ� ���� �� ������ ���� N�� �־�����. 
	std::cin >> num;

	//��° �ٿ� �������� ���� ������ �־�����.
	//��� ������ ����/�ְ�����*100
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