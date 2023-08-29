#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a list
 * @head: a pointer to a pointer
 * @n: data passedto the node
 * Return: address of new element or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *trv;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		trv = *head;
		while (trv->next != NULL)
		{
			trv = trv->next;
		}
		trv->next = ptr;
		return(trv->next);
	}
}
