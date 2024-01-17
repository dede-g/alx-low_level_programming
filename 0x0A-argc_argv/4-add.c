#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * Print the result, followed by a new line
 * if no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * We ssume that numbers and the addition of all the numbers
 * can be stored as an int
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Sucess), 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);


}
