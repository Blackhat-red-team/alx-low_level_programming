#include "function_pointers.h"

/**
 * int_index - the earchess for an integers
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: pointer to the comparing is function
 *
 * Return: the index of the firsted element for which
 * the cmp function is does not return 0, or -1 if no match is found
 * or size is negatived
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
