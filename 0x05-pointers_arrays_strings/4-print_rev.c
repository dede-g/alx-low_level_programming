#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * followed by a newline
 *
 * @s: given string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
