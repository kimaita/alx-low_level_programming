#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure with members describing a dog and its owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: struct to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print dog - function that prints a struct dog
 * @d: dog struct
 *
 */
void print_dog(struct dog *d);

typedef struct dog dog_t;

/**
 * new_dog - function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - function that frees dogs i.e. memory allocated for dogs
 * @d: pointer to memory to free
 *
 */
void free_dog(dog_t *d);
#endif /* #ifndef DOG_H */
