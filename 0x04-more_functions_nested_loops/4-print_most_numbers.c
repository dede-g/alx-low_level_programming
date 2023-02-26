#include "main.h"

/**
 * print_most_numbers - prints the single numbers except 2 and 4
 *
 * Return: no return (void)
 */

void print_most_numbers(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if (d == 50 || d == 52)
		{
			continue;
		}
		_putchar(d);
	}
	_putchar('\n');
}
