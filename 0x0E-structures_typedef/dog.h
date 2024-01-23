#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a C- structure
 * @name: first member
 * @age: second member
 * @owner:third member
 *
 * Description: declares a C structure that assigns it to a a different
 *              structure through a pointer *d to the function declared.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif/* DOG_H */
