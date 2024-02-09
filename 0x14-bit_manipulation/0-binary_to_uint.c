#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts given binary number to unsigned int(base 10)
 * @b: string of number
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		result = result * 2 + (b[count] - '0');
	}
	return (result);
}
