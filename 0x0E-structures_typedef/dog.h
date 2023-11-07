#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog onwer's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * Define a new type dog_t as a new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
