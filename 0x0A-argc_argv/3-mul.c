#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies two numbers
 * @argc: argument count
 * @argv: pointer to the almost stringof args
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int first_num;
	int second_num;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first_num = atoi(argv[1]);
		second_num = atoi(argv[2]);
		result = first_num * second_num;
		printf("%d\n", result);
		return (0);
	}
}

