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
	int len = 0, pr;

	while (s[len] != '\0')
		len++;
	for (pr = len - 1; pr >= 0; pr--)
		_putchar(s[pr]);
	_putchar('\n');
}
