#include "main.h"

/**
 * *_memcpy - copiess memory area
 * @dest: destinatioon memory area
 * @src: memory areaa to copy from
 * @n: number of bytees to copy
 *
 * Return: pointeer to dest
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
