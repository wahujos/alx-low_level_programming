#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a node at the beginning of the list
 * @head: This is a double pointer. its a pointer to the
 * pointer that points to the node.
 * @n: data to be contained in the new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
