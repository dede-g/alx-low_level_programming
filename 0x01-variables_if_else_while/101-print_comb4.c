#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A program that prints all possihle combinations of tl3 digits
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of 0, 1 and 2
 * Only putcgar can be used(Maximum of 6 times)
 *
 * Return: 0(Success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a >= b || b >= c || a >= c)
					continue;
				else
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a == '7' && b == '8' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
