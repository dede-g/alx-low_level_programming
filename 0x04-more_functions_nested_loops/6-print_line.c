#include "main.h"

/**
 * print_line - draws a straignt line on terminal
 * @n: number of times the character _ would be printed
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

