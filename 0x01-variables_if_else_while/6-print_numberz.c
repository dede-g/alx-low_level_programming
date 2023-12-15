#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digits numbers of base 10
 * That is from 0-9
 *
 * Return: 0 (Succees)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
