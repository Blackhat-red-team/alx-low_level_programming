#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns yields the size of a linked list's elements
 * @h: pointer to the list_t is the list
 *
 * Return: number of elements in the h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
