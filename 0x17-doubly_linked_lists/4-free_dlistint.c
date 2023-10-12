#include "lists.h"
/**
 * free_dlistint - function that frees alinked list
 * @head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *temp;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			temp = ptr->next;
			free(ptr);
			ptr = temp;
		}
	}
}
