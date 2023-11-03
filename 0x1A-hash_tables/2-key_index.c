#include "hash_tables.h"
/**
 * key_index - a function that gives yu the index of a key
 * @key: this is the key
 * @size: size of the array or the hash table
 * Return: index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key)
	{
	index = hash_djb2(key) % size;
	}
	return (index);
}
