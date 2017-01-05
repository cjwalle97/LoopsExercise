#include <iostream>

int main()
{
	//1. make a loop to iterate backwards from 100-0
	for (int i = 100; i != 0; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 100; i != -1; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 101; i != 0; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 100; i != 0; i -= 2)
	{
		std::cout << i << std::endl;
	}

	//2. iterate through 0 - 100 replace 3 with Fizz and 5 with Buzz
	for (int k = 0; k < 100; k++)
	{
		if(k % 3 = 0)
		{
			std::cout << "Fizz";
		}
		if (k % 5 = 0)
		{
			std::cout << "Buzz";
		}
		else
		{
			std::cout << k;
		}
	}
	//3.
	for (int i = 0; i < 1000; i++)
	{
		int count = 0;
		if (i % 3 = 0 || i % 5 = 0)
		{
			count += i;
		}
		return count;
	}
	
	//4.
	int othercount = 0;
	int i = 1000;
	while (i>0)
	{
		i -= 1;
		if(i % 3 = 0)
		{
			
			std::cout << i;
		}
		if (i % 5 = 0)
		{
			std::cout << i;
		}
		if (i % 3 = 0 || i % 5 = 0)
		{
			othercount += i;
		}
	}
}