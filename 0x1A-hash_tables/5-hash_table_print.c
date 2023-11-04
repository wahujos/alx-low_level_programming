#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c;
	hash_node_t *pointer;
	int printed = 0;

	printf("{");
	if (ht != NULL)
	{
		for (c = 0; c < ht->size; c++)
		{
			pointer = ht->array[c];
			if (pointer != NULL)
			{
				while (pointer != NULL)
				{
					if (printed > 0)
						printf(", ");
					printf("'%s': '%s'", pointer->key, pointer->value);
					printed = 1;
					pointer = pointer->next;
				}
			}
		}
	}
	printf("}\n");
}
