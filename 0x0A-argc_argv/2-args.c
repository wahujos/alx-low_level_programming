#include <stdio.h>
#include <stdlib.h>

/**
 * main - execution begins
 * @argc: count of arguments
 * @argv: a pointer to the string of args
 * Return: Success(0)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
