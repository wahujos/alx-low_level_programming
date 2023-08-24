#include <stdio.h>
#include "lists.h"

/**
 * list_len - number of elements in the linked list
 * @h: pointer to head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while(h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
