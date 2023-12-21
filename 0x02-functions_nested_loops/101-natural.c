#include "main.h"

/**
 * main - prints the sum of all the multiples of 3 and 5 below 1024
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) | (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
