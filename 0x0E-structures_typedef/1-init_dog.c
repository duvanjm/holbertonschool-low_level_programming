#include "dog.h"
/**
 * struct dog - Short description
 * @name:struct
 * @age: struct
 * @owner: struct
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
