#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of a linked list
 * @head: pointer head
 * Return: sum od data 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
