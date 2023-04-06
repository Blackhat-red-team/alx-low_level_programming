#include "main.h"

/**
 * *_memcpy - replicates a memory location
 * @dest: final memory location
 * @src: memory location to copy to
 * @n: number of copied bytes
 *
 * Return: indicate dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
