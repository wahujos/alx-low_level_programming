#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsinged long int
 * @index: index to set to 1
 * Return: 1 success -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index <= (sizeof(unsigned long int) * 8 - 1))
	{
		mask = 1UL << index;
		*n = *n | mask;
		return (1);
	}
	else
		return (-1);
}
