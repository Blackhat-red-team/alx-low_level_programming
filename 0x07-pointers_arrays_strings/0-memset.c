#include "main.h"

/**
 * *_memset - Fills memory with a constant byte using _memset.
 * @s: memory area to be filld to fill the memory space
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
