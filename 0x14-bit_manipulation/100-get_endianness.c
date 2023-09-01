#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: interger 0 big endian 1 little endian
 */
int get_endianness(void)
{
	unsigned int num;
	unsigned char *ptr;

	num = 1;
	ptr = (unsigned char *)&num;
	if ((int)ptr[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
