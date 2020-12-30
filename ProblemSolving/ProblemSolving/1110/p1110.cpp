#include"p1110.h"

void p1110::p1110Solving()
{
	int count = 0;
	int result;
	int num;
	int a, b, c, d;
	std::cin >> num;
	result = num;
	while (true)
	{
		a = num / 10;
		b = num % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		num = d;
		count++;
		if (d == result)
			break;
	}
	std::cout << count;
}