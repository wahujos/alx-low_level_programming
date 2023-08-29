#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: a pointer to the pointer that points to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head != NULL && head != NULL)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			free(*head);
			*head = ptr;
		}
	}
	*head = NULL;
}
