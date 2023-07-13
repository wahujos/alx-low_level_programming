#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	puts("Size of a char: ",sizeof(char)," byte(s)");
	puts("Size of an int: ",sizeof(int)," byte(s)");
	puts("Size of a long int: ",sizeof(long int)," byte(s)");
	puts("Size of a long long int: ",sizeof(long long int)," byte(s)");
	puts("Size of a float: ",sizeof(float)," byte(s)");
	return (0);
}
