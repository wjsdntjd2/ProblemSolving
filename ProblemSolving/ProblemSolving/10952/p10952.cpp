#include"p10952.h"
void p10952::p10952Solving()
{
	bool isOn = true;
	while (isOn)
	{
		int a = 0;
		int b = 0;
		std::cin >> a;
		std::cin >> b;
		if (a == 0 && b == 0)
		{
			isOn = false;
		}
		else
		{
			a += b;
			std::cout << a << std::endl;
		}
	}
}