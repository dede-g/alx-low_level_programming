#include "main.h"

/**
 * flip_bits - determines the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result;

	xor_result = n ^ m;
	while (xor_result)
	{
		count += 1 & xor_result;
		xor_result >>= 1;
	}
	return (count);
}
