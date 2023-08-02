#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - gives the natural square root of a number
 * @n: number
 * Return: returns square root of number or -1 if no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
/**
 * _sqrt - takes number and root as its arguments,
 * @root: square root of the number
 * @num: a number that is demed to be the square of the root
 * Return: root
 */
int _sqrt(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (_sqrt(num, root + 1));
	}
}
