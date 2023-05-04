#include "main.h"

/**
 * set_bit - assigns a bit at a certain index to have value 1
 * @n: The pointer passed a decimal number
 * @index: index position to shift, beginning at 0
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int v;

	if (index > 64)
		return (-1);

	for (v = 1; index > 0; index--, v *= 2)
		;
	*n += v;

	return (1);
}

