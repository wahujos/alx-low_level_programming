#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - execution begins
 * @argc: arguments count
 * @argv: pointer
 * Return: 1 for error 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;


	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			num = atoi(argv[i]);
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);

		}
	}
	printf("%d\n", sum);
	return (0);
}
