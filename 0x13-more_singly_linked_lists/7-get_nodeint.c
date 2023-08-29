#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the list
 * @index: index of node starting from 0
 * Return: return nth node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
