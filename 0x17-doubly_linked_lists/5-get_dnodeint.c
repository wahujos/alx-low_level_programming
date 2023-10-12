#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: double pointer to the head list
 * @index: position
 * Return: pointer to the node null if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int counter = 0;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			counter++;
			if ((counter - 1) == index)
			{
				return (ptr);
			}
			else
			{
			ptr = ptr->next;
			}
		}
		return (NULL);
	}
	else
	{
		return (NULL);
	}
}
