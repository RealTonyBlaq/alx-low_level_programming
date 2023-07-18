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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* #ifndef DOG_H */
