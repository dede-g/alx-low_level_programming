#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program prints a string to standard error
 *
 * Return: 1
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, sizeof(str1) - 1);
	return (1);
}
