#include "main.h"

/**
 * print_times_table - prints n times table starting from 0
 * @n: times table to print
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int row, column;

	if (n < 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				prnt_format(row, column);
			}
			_putchar('\n');
		}
	}
}

/**
 * prnt_format - prints the product of rwo and column
 * @row: row to print product
 * @column: column to print product into
 *
 * Return: Nothing
 */

void prnt_format(int row, int column)
{
	int i;

	i = row * column;

	if (column == 0)
		_putchar('0');
	else if (i <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(i + '0');
	}
	else if (i > 9 && i < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((i / 100) + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar((i % 10) + '0');
	}
}
