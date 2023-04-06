#include "main.h"

/**
 * _strncat - adds n bytes from one string to another
 * @dest: location string
 * @src: source text
 * @n: amount of str bytes to concatenate
 *
 * Return: a reference to the output string dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

