#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head pointer
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current = head, *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current->str);
		free(current);
		current = tmp;
	}
}
