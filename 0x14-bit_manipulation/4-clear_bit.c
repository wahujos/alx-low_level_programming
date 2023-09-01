#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to an address with the unsigned long int
 * @index: position to set the value
 * Return: 1 Success and -1 Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n & ~(mask);
	return (1);
}
