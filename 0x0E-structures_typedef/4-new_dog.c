#include <stdlib.h>
#include "dog.h"

/**
 * _stzleann - returns a string's length
 * @s: string to assess
 *
 * Return: how long the string is
 */
int _stzleann(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strapy - copies the string that srced is pointing at
 * including the terminating null byte (\0)
 * to the barrier that dested pointed at
 * @dested: pointer to the buffer where the string is copied
 * @srced: to be copied string
 *
 * Return: the URL for dested
 */
char *_strapy(char *dested, char *srced)
{
	int len, i;

	len = 0;

	while (srced[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dested[i] = srced[i];
	}
	dested[i] = '\0';

	return (dested);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len4, len8;

	len4 = _stzleann(name);
	len8 = _stzleann(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len4 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len8 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strapy(dog->name, name);
	_strapy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
