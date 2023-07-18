#include "main.h"

/**
 * putcharacter - Program that prints _putchar
 */
int putchar(void)
{
	char output[] = "_putchar";

	int arraysize = sizeof(output) / sizeof(output[0]);

	for (int i = 0; i < arraysize; i++)
	{
		putchar(i);
	}
	putchar ('\n');
	return 0;
}
