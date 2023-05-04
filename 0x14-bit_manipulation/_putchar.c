#include <unistd.h>

/**
 * _putchar - stdout is updated with the letter a
 * @a: The character The text to be printed
 *
 * Return: On success 1.
 * On error, Errno is set properly and -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
