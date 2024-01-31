#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 0, a = 0, b = 1, c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
