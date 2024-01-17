#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * prints the result of the multiplication, followed by a new line
 * We assume that the two numbers and result of the multiplication
 * can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error
 * followed by a new line, and return 1
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if sucess, 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
