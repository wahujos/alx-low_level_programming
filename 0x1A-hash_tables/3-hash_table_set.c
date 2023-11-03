#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table we want to add or update the key/value to
 * @key: key cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	index =  key_index((const unsigned char *)key, ht->size);
	if (key == NULL || ht == NULL || *key == '\0')
		return (0);
	index =  key_index((const unsigned char *)key, ht->size);

	
	new_node = malloc(sizeof(hash_node_t));
	if (new_node->key == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
