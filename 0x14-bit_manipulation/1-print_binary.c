#include "main.h"
#include <stdio.h>

/**
 * print_binary - print a number's binary representation
 * @n: printing a decimal number in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tep;
	int shif;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tep = n, shif = 0; (tep >>= 1) > 0; shif++)
		;

	for (; shif >= 0; shif--)
	{
		if ((n >> shif) & 1)
			printf("1");
		else
			printf("0");
	}
}

