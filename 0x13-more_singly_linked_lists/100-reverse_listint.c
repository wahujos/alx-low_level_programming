#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function reverses the linked list
 * @head: double pointer to the list
 * Return: pointer to the first node of the reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_ptr = NULL;

	while (*head != NULL)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_ptr;
	}
	*head = prev;
	return (*head);
}
