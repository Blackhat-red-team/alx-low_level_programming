#include "main.h"

/**
 * *_memset - gives memory a constant byte of data
 * @s: to fill the memory space
 * @b: to copy char
 * @n: how many times to copy b
 *
 * Return: pointer to the storage space
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
