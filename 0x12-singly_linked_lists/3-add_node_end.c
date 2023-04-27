#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds ends a linked list with a new node
 * @head: double pointer to the list_t the list
 * @str: string to install a new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newed;
	list_t *temper = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newed = malloc(sizeof(list_t));
	if (!newed)
		return (NULL);

	newed->str = strdup(str);
	newed->len = len;
	newed->next = NULL;

	if (*head == NULL)
	{
		*head = newed;
		return (newed);
	}

	while (temper->next)
		temper = temper->next;

	temper->next = newed;

	return (newed);
}
