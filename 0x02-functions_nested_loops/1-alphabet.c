#include "main.h"

/**
 * print_alphabet - prints the english alphabets in lowercase
 * using the _putchar function (maximum of 2 in code)
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
