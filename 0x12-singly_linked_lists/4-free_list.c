#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees sets a linked list free
 * @head: list_t list to be the freed
 */
void free_list(list_t *head)
{
	list_t *temper;

	while (head)
	{
		temper = head->next;
		free(head->str);
		free(head);
		head = temper;
	}
}
