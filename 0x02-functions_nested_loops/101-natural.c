#include <stdio.h>

/**
 * main - Gets the sum of multiples
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 1024;
	int c;
	int sum = 0;

	for (c = 0; c < num; c++)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
	}
	printf("%d ", sum);
	return (0);
}


