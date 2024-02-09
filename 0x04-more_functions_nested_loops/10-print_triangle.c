#include "main.h"

/**
 * print_triangle - prints a triamgle followed by a new line
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= (size - 1) - i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
