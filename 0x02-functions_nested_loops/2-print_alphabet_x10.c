#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet in lowercase 10times
 * with a new line separating them
 * using the _putchar function a maximum of 2 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
