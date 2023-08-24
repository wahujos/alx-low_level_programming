#include <stdio.h>
#include "lists.h"
/**
 * print_list - function to print list element
 * @h: argument passed pointer to the head
 * Return: interger count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h =h->next;
	}
	return (count);
}
