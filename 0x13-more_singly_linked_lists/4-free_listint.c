#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		exit(1);
	}
	else
	{
		ptr = head;

		while (ptr != NULL)
		{
			ptr = ptr->next;
			free(head);
			head = ptr;
		}
	}
}
