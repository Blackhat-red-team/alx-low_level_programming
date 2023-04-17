#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basics about dogs
 * @name: First person
 * @age: Second person
 * @owner: third person
 *
 * Description: Longer explanation
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strapy(char *dested, char *srced);
int _stzleann(char *s);

#endif
