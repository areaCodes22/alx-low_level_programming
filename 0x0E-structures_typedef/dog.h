#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
*/
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
*/
typedef struct dog dog1;

void init_dog_t(struct dog *d, char *name, float age, char *owner);
void print_dog_t(struct dog *d);
dog_t *new_dog_t(char *name, float age, char *owner);
void free_dog_t(dog1 *d);

#endif /* struct dog_t */
