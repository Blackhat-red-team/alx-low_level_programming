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
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
