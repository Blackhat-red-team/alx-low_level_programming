#include "main.h"

/**
 * _strlen - returns a string's length
 * @s: string to assess
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

