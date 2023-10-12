#include "lists.h"
/**
 * print_dlistint - prints all the emements of a double list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		counter = counter + 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (counter);
}
