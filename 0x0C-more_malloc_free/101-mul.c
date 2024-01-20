#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments passed to it
 * @argv: arguments passed
 *
 * Return: 0(Sucess)
 */

int main(int argc, char *argv[])
{
	unsigned int result, num1, num2;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%u\n", result);
	return (0);

}
