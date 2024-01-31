#include "main.h"

/**
 * main - prints first 50 fibonacci numbers
 * Starting with 1 amd 2
 * numbers aew followed by a comma and space
 *
 * Return: 0(Success)
 */

int main(void)
{
	unsigned int a = 0, b = 1, i, sum;

	for (i  = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%u", sum);
		if (i != 49)
			printf(", ");

		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
