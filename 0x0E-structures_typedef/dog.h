#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for the created "struct dog"
 */
typedef struct dog dog_t;

/**
 * struct dog - this is a structure for dogs
 * @name: first member of struct
 * @age: second member of struct
 * @owner: third member of struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
