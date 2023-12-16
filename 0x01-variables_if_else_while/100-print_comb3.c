#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  A program that prints all possible different combinations
 * of two digits
 * Numbers are separated by a comma and space
 * Prints the smallest number of the two combinations
 * The two digits must be different
 * 01 and 10 are condidered the same combination of 1 and 0
 * Only putchar function is allowed
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i > j || i == j)
				continue;
			else
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
