#include <stdio.h>
#include <stdlib.h>
/**
 * main - start execution
 * @argc: count
 * @argv: pointer
 * Return: success (0) 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num % 25 == 0)
		{
			change = num / 25;
		}
		else if (num % 10 == 0)
		{
			change = num / 10;
		}
		else if (num % 25 != 0)
		{
			change = (num / 25) + (num % 25);
		}
		else if (num % 10 != 0)
		{
			change = (num / 10) + (num % 10);
		}
		printf("%d\n", change);
	}
	return (0);
}
