#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The structure
 * @name: A char type
 * @age: A float type
 * @owner: A char type
 *
 * Julien likes dogs and so do I
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #ifndef DOG_H */
