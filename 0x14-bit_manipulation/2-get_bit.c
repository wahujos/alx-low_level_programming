#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0
 * @n: integer passed
 * Return: value of the bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index <= (sizeof(unsigned long int) * 8 - 1))
	{
		if ((n & mask) == mask)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (-1);
	}
}
