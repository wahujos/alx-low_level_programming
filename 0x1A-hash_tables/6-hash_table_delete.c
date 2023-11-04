#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *pointer;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			pointer = current;
			current = current->next;
			free(pointer->key);
			free(pointer->value);
			free(pointer);
		}
	}
	free(ht->array);
	free(ht);
}
