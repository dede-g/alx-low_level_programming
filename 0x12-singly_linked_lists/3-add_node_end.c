#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to pointer head
 * @str: data in new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *newNode;

	if (head == NULL || str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	return (newNode);
}
