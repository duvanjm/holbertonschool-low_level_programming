#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *aux;

	for (i = 0; i < ht->size; ++i)
	{
		node = (ht->array)[i];
		while (node)
		{
			aux = node;
			node = node->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
