#include "main.h"

/**
 * _puts - prints a sting followed by a new line to stdout
 *
 * @str: string to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
