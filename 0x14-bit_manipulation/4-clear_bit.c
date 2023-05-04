#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set a bit at a specific index to have a value of 0
 * @n: pointer to the desired decimal number
 * @index: change in index position
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hol;

	if (index > 64)
		return (-1);
	hol = index;
	for (i = 1; hol > 0; i *= 2, hol--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}

