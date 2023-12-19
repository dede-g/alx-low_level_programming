#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @i: number to be checked
 *
 * Description: This program prints whether a given number
 * is positive, negative or zero
 *
 * Return: Nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
