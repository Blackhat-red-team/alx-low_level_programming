#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a binary number to an unsigned int conversion
 * @b: char string
 * Return: if there is an unconvertible character, 0 or the converted decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tota, pow;
	int lens;

	if (b == NULL)
		return (0);

	for (lens = 0; b[lens]; lens++)
	{
		if (b[lens] != '0' && b[lens] != '1')
			return (0);
	}

	for (pow = 1, tota = 0, lens--; lens >= 0; lens--, pow *= 2)
	{
		if (b[lens] == '1')
			tota += pow;
	}

	return (tota);
}

