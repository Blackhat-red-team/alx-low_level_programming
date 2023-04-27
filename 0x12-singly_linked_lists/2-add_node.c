#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the linked list's starting point
 * @head: double pointer to the list_t is the list
 * @str: adding a new string to the node
 *
 * Return: the address of the new element, or the NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newed;
	unsigned int len = 0;

	while (str[len])
		len++;

	newed = malloc(sizeof(list_t));
	if (!newed)
		return (NULL);

	newed->str = strdup(str);
	newed->len = len;
	newed->next = (*head);
	(*head) = newed;

	return (*head);
}
