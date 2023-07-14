#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main Entry - point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d, if the number is greater than 0: is positive", n);
	}
	else if (n == 0)
	{
		printf("%d, if the number is 0: is zero", n);
	}
	else
	{
		printf("%d, if the number is less than 0: is negative", n);
	}
	return (0);
}
