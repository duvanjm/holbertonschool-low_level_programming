#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 * @name: name of dog
 * @age: age of doc
 * @owner: owner of dog
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *estnew;
int i = 0, j = 0, k;

	estnew = malloc(sizeof(dog_t));
	if (estnew == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	estnew->name = malloc(sizeof(char) * i + 1);
	if (estnew->name == NULL)
	{
		free(estnew);
		return (NULL);
	}
	estnew->owner = malloc(sizeof(char) * j + 1);
	if (estnew->owner == NULL)
	{
		free(estnew->name);
		free(estnew);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		estnew->name[k] = name[k];
	estnew->name[k] = '\0';
	estnew->age = age;
	for (k = 0; k < j; k++)
		estnew->owner[k] = owner[k];
	estnew->owner[k] = '\0';
	return (estnew);
}
