#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function return number of elements in a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	else
	{
		ptr = h;
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
