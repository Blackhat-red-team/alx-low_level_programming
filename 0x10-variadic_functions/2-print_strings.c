#include "variadic_functions.h"

/**
 * print_strings - prints the is strings
 * @separator: separator > between the strings
 * @n: number of is arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *star;

	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		star = va_arg(list, char *);
		if (!star)
			star = "(nil)";
		if (!separator)
			printf("%s", star);
		else if (separator && x == 0)
			printf("%s", star);
		else
			printf("%s%s", separator, star);
	}

	printf("\n");

	va_end(list);
}
