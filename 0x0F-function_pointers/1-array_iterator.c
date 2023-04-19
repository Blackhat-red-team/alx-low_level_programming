#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - the executes a function is given as a parameter
 * on each elemented of an array
 * @array: the array to iterate is over
 * @size: size is of the array
 * @action: pointer to function is used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
