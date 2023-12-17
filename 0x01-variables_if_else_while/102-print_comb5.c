#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Prints different combinations of two two-digit numbers
 * Numbers range  from 0-99 and combinations are followed by comma and space
 * All numbers are printed as two digits, 01 instead of 1
 * 00 01 and 01 00 are considered the same combination of 1 and 0
 *
 * Only putchar function is allowed (maximum of 8 times)
 *
 * Return: 0(Success)
 */

int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;

			if (i >= j)
				continue;
			else
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
