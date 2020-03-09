#include "dog.h"
/**
 * init_dog - function
 * @name:struct
 * @age: struct
 * @owner: struct
 * @d: pointer
 * Description: Write a function that initialize a variable of type struct dog
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
