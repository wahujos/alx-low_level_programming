#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given index
 * @head: double pointer
 * @idx: index of the list
 * @n: data of node
 * Return: pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	ptr = *head;
	while (ptr && count < (idx - 1))
	{
		ptr = ptr->next;
		count++;
	}
	if (!ptr)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
