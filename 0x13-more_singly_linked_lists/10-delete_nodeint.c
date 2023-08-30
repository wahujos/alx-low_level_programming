#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes the
 * node at index of a linked list
 * @head: double pointer to the list.
 * @index: index of the node that should be deleted.
 * Return: 1 success -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	ptr = *head;
	prev = NULL;
	while (ptr != NULL && count < index)
	{
		prev = ptr;
		ptr = ptr->next;
		count++;
	}
	if (!ptr)
	{
		return (-1);
	}
	prev->next = ptr->next;
	free(ptr);
	return (1);
}
