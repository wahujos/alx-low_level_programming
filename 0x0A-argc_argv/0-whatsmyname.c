#include <stdio.h>
#include <stdlib.h>

/**
 * main - program execution begins
 * @argc: count of arguments supplied in the program
 * @argv: pointer to an array of strings
 * Return: exit(0) success otherwise failure
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
