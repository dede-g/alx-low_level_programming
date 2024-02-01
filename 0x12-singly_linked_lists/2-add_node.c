#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: address to head
 * @str: data for new node
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL || str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
