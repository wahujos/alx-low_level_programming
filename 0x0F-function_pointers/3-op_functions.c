#include <stdlib.h>
#include "calc.h"
/**
 * op_add - function to add two operants
 * @a: first interger
 * @b: second interger
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to add two operants
 * @a: first interger
 * @b: second interger
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to subtract two numbers
 * @a: first interger
 * @b: second interger
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mul - function to divide two numbers
 * @a: first interger
 * @b: second interger
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mul - function to give modulo of two numbers
 * @a: first interger
 * @b: second interger
 * Return: modulo of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
