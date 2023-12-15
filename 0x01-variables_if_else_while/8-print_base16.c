#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A program that prints all the numbers of base 16 in lowercase
 * Only putchar function is allowed
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
