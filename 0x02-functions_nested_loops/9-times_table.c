#include "main.h"

/**
 * times_table - prints the 9 times table from 0 to 9
 *
 * Return: Nothing
 */

void times_table(void)
{
	int row, column, i;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			i = row * column;
			if (i > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
