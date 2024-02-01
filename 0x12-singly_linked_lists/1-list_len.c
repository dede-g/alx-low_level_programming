#include "lists.h"
#include <stdio.h>

/**
 * list_len - counts elemets in a list
 * @h: pointer to list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	if (h == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
