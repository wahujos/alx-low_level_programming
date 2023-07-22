#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: - number passed on to the program.
 * Return: the value of the last digit.
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
