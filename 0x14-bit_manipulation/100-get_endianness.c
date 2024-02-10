#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *ptr, first_byte;

	x = 0x01;
	ptr = (char *)&x;

	first_byte = *ptr;

	if (first_byte == 0x01)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
