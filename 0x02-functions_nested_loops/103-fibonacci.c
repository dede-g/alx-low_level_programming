#include <stdio.h>

/**
 * main - prints even fibonacci series not exceeding 4 million
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 0;

	{
		while (c < 4000000)
		{
			c = a + b;
			a = b;
			b = c;

			if (c < 4000000 && c % 2 == 0)
			{
				if (c != 2)
					printf(", ");
				printf("%lu", c);
			}
		}
	}
	printf("\n");
	return (0);
}
