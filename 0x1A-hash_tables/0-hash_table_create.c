#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: size of the has list
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p = NULL;

	if (!size)
		return(NULL);
	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
		return (NULL);
	p->size = size;
	p->array = calloc(sizeof(hash_node_t), size);
	if (p->array == NULL)
	{
		return (NULL);
	}
	return (p);
}
