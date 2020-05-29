#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key you are looking for
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int i;

	if (!ht || !key || !strcmp(key, ""))
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	new = ht->array[i];
	while (new)
	{
		if (!strcmp(new->key, key))
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
