#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints members of list
 * @h: head to list
 * Return: Number of elements(nodes)
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (tmp != NULL)
	{
		if (tmp->str != NULL)
			printf("[%u] %s\n", tmp->len, tmp->str);
		else
			printf("[0] (nil)\n");
		tmp = tmp->next;
		count++;
	}
	return (count);
}
