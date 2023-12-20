#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: integer to be checked
 *
 * Return: a
 */

int _abs(int r)
{
	int a;

	if (r < 0)
	{
		a = r * -1;
		return (a);
	}
	else if (r == 0)
	{
		a = r;
		return (a);
	}
	else
	{
		return (r);
	}
}
