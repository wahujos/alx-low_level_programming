#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int al = 0;
	int bl = 0;
	int cl = 0;

	if (array == NULL)
	{
		return (-1);
	}
	cl = (right - left) + 1;
	print_array(array, cl);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
			al = (right - left) + 1;
			print_array(array, al);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			bl = (right - left) + 1;
			print_array(array, bl);
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
/**
 * print_array - prints an array
 * @array: the array to print
 * @s: size of the array
 */
void print_array(int *array, int s)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < s; i++)
	{
		if (i == s - 1)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
}
