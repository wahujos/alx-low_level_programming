#include "lists.h"
/**
 * add_dnodeint - function that adds a
 *  new node at the beginning of the list
 * @head: double pointer
 * @n: data
 * Return: address of new element or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (*head);
}
