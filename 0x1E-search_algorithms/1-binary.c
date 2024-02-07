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

	if (array == NULL)
	{
		return (-1);
	}
	print_array(array, left, right);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
			if (left <= right)
				print_array(array, left, right);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
			if (left <= right)
				print_array(array, left, right);
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
 * @left: lower index
 * @right: higher index
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
}
