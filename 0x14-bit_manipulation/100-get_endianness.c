#include "main.h"

/**
 * get_endianness - verify endianness
 * Return: large endian, 0; small endian, 1
 */
int get_endianness(void)
{
	int number;

	number = 1;
	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}

