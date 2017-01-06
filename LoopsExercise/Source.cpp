#include <iostream>

int main()
{
	//1. make a loop to iterate backwards from 100-0
	for (int i = 100; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 99; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 100; i > 0; i--)
	{
		std::cout << i << std::endl;
	}
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}

	//2. iterate through 0 - 100 replace 3 with Fizz and 5 with Buzz
	for (int k = 0; k < 100; k++)
	{
		if (k % 3 == 0 & k % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		if (k % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
			continue;
		}
		if (k % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
			continue;
		}
		else
		{
			std::cout << k << std::endl;
		}
	}
	//3.
	for (int i = 0; i < 1000; i++)
	{
		int count = 0;
		if (i % 3 == 0 || i % 5 == 0)
		{
			count += i;
		}
	}

	//4.
	int i = 100;
	while (i >= 0)
	{
		i -= 1;
		std::cout << i << std::endl;
	}
	int i = 99;
	while (i >= 0)
	{
		i -= 1;
		std::cout << i << std::endl;
	}
	int i = 100;
	while (i > 0)
	{
		i -= 1;
		std::cout << i << std::endl;
	}
	int i = 100;
	while (i >= 0)
	{
		i -= 2;
		std::cout << i << std::endl;
	}

	int k = 0;
	while (k < 100)
	{
		if (k % 3 == 0 & k % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		if (k % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
			continue;
		}
		if (k % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
			continue;
		}
		else
		{
			std::cout << k << std::endl;
		}
	}

	int j = 0;
	int othercount = 0;
	while (j <= 1000)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			othercount += j;
		}
	}
}