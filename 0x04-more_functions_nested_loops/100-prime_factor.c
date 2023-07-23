#include <math.h>
#include <stdio.h>

/**
 * largestPrimeFactor - checks for the largest prime factor
 * @n: integer to check for prime factors
 *
 * Return: Largest prime number
 */

long largestPrimeFactor(long n)
{
	long maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}
	while (n % 3 == 0)
	{
		maxPrime = 3;
		n = n / 3;
	}
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
	{
		maxPrime = n;
	}
	return (maxPrime);
}
/**
 * main - test the function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", largestPrimeFactor(n));
	return (0);
}

