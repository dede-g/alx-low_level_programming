#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints lowercase alphabet in reverse
 * followed by a new line
 * Only putchar function allowed
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
