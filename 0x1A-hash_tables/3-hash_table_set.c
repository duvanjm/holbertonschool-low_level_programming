#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table
 * @key: key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int i;

	if (ht == NULL || key == NULL || !strcmp(key, ""))
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = ht->array[i];
	while (new != NULL)
	{
		if (strcmp(key, new->key))
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
	}
	new = calloc(sizeof(hash_node_t), 1);
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
		return (1);
	}
	new->next = ht->array[i];
	ht->array = NULL;

	return (1);
}
