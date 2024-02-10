#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: given number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num_bits, bit, print;

	num_bits = sizeof(unsigned long int) * 8 - 1;
	print = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; num_bits > 0; num_bits--)
	{
		if ((n >> num_bits) & 1 || print)
		{
			bit = (n >> num_bits) & 1;
			_putchar(bit + '0');
			print = 1;
		}
	}
	_putchar((n & 1) + '0');
}
