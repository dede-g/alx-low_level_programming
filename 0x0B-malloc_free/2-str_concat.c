#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * if NULL is passed, treat it as an empty string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory which 
 * contains the contents of s1, followed by s2, and null terminated
 * NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int length;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1) + strlen(s2);

	string = malloc((length + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);
	strcpy(string, s1);
	strcat(string, s2);

	return (string);
}
