#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: liat of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *star, *seap = "";

	va_list liat;

	va_start(liat, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", seap, va_arg(liat, int));
					break;
				case 'i':
					printf("%s%d", seap, va_arg(liat, int));
					break;
				case 'f':
					printf("%s%f", seap, va_arg(liat, double));
					break;
				case 's':
					star = va_arg(liat, char *);
					if (!star)
						star = "(nil)";
					printf("%s%s", seap, star);
					break;
				default:
					x++;
					continue;
			}
			seap = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(liat);
}
