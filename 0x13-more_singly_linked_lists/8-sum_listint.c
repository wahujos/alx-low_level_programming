#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all the data n in a linked list
 * @head: pointer to the list
 * Return: sum of data, if empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
