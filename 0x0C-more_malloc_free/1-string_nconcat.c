#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * string_nconcat - concantenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concantenate
 *
 * Return: pointer to allocated memory , NULL if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	ptr = malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
}
