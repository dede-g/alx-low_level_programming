#include "main.h"

/**
 * puts2 - prints everyother character of a string
 * starting from the first character
 * followed by a new line
 *
 * @str: given string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
