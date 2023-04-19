#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - the prints a name
 * @name: the name to print
 * @f: the pointer to the printing is function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
