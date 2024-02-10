#include "main.h"

/**
 * get_bit - gets the bit at a given position
 * @n: given number
 * @index: given position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, max_index;

	max_index = sizeof(unsigned long int) * 8;
	if (index >= max_index)
		return (-1);
	mask = 1 & (n >> index);

	return (mask);
}
