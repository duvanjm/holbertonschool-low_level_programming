#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - Short description
 * @name:struct
 * @age: struct
 * @owner: struct
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
