#include <iostream>

int addTwoInts(int a, int b)
{
	return a + b;
}

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << a[i] << std::endl;
	}

	return;
}

int fibonacci(int x)
{
	int a = 0;
	int b = 1;
	int c = 0;

	for (int i = 0; i < 5; i++)
	{
		c = a + b;

		a = b;
		b = c;
	}

	return a;
}
