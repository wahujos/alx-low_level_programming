#include "lists.h"
/**
 * dlistint_len - function that returns the
 *  number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
