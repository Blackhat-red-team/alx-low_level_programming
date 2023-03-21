#include "main.h"
/**
 *print_sign - checks the number value
 *
 *@n: contains the number
 *
 *Return: 0 if zero, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
