#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  A program that prints single digit numbers using putchar
 * Numbers are printing in ascending order
 * sparated by a comma then space
 *
 * Return: 0(Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
