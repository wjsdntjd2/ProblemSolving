#include"p1110.h"

void p1110::p1110Solving()
{
	int temp = 0;
	int t = 0;
	int a = 0;
	int s = 0;
	int b = 0;
	int count = 0;
	std::cin >> temp;
	s = temp;
	if (temp >= 10)
	{
		t = temp / 10;
		while (temp > 10)
		{
			temp -= 10;
		}
	}
	t += temp;
	count++;
	while (t != s)
	{
		if (t >= 10)
		{
			while (temp > 10)
			{
				temp -= 10;
			}
		}
		else
		{
			t += temp;
			count++;
		}
	}
	std::cout << count;
}