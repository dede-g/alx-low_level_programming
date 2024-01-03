#include "main.h"

/**
 * puts_half - prints second half of a string followed by a new line
 * prints n characters of stribg for an odd length
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: input string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length = 0, half;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length + 1) / 2;
	for (; half < length; half++)
		_putchar(str[half]);
	_putchar('\n');
}

