#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphababet in lowercase
 * and then in uppercase, followed by a new line
 * Only putchar function is allowed
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
