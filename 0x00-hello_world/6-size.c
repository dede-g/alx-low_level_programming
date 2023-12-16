#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the size of various type of variables
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(d));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", (sizeof(f));
	return (0);
}
