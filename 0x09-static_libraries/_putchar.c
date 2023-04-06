#include <unistd.h>

/**
 * _putchar - stdout is updated with the character C
 * @c: The text to be printed
 *
 * Return: About achievement 1
 * On error, -1 is ned, and the proper value of errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

