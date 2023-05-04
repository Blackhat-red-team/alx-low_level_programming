#include "main.h"
#include <stdio.h>
/**
 * get_bit - find the bit value at a specified index
 * @n: number to be assessed
 * @index: index, beginning at zero, of the desired bit
 * Return: Bit value or -1 in the event of a mistake at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hol;

	if (index > 64)
		return (-1);

	hol = n >> index;

	return (hol & 1);
}

