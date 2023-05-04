#include "main.h"
#include <stdio.h>

/**
 * flip_bits - To change one number to another, flip the bits
 * @n: initial number
 * @m: to convert a second number to
 * Return: how many bits were required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difa;
	int counterrs;

	difa = n ^ m;
	counterrs = 0;

	while (difa)
	{
		counterrs++;
		difa &= (difa - 1);
	}

	return (counterrs);
}


