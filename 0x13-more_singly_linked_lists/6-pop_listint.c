#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a pointyer for head.
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
	}
	if (*head != NULL)
	{
	return ((*head)->n);
	}
	return (0);
}
