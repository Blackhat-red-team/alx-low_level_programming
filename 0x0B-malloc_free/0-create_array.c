#include <stdlib.h>
#include "main.h"

/**
 * *create_array - produces a char array,
 * and sets a specified char as its initial value
 * @size: size of the proposed array
 * @c: char to start the array with c
 *
 * Return: array pointer (Success), NULL (Error) 
 */
char *create_array(unsigned int size, char c)
{
	char *e;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	e = (char *) malloc(sizeof(char) * size);

	if (e == NULL)
		return (0);

	while (x < size)
	{
		*(e + x) = c;
		x++;
	}

	*(e + x) = '\0';

	return (e);
}
