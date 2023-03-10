#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: an input integer
 * Return: A pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	;
	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
