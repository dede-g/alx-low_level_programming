#include "main.h"

/**
 * _isalpha - Checks if a given alphabet is uppercase or lowercase
 * @c: alphabet to be checked
 *
 * Return: 1 if c ia a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
