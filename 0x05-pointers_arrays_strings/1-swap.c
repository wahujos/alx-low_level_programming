#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: First interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
