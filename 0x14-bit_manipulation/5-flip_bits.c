#include "main.h"
/**
 * flip_bits - num of bits to flip to get from one num to another
 * @n: first number passed
 * @m: second number passed
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long result;

	result = n ^ m;
	while (result)
	{
		flips += result & 1;
		result >>= 1;
	}
	return (flips);
}
