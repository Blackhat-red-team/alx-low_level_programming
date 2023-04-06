#include "main.h"

/**
 * _isdigit - examines a digit (0 through 9)
 * @c: That must be verified
 * Return: 0 otherwise, 1 if c is a digit
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
