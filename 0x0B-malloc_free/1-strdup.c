#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: given string
 * Return: NULL if insufficient memmory, pointer to duplocated string(Sucess)
 */

char *_strdup(char *str)
{
	char *string;
	unsigned int length;

	if (str == NULL)
		return (NULL);
	length = strlen(str);

	string = malloc((length + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	strcpy(string, str);
	return (string);

}
