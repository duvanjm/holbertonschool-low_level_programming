#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - Short description
 * @name:struct
 * @age: struct
 * @owner: struct
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
