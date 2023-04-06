#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: to attach a string to
 * @src: adding a string
 *
 * Return: a reference to the output string 
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
