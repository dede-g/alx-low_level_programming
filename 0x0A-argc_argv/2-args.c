#include <stdio.h>

/**
 * main - prints all arguments it receives including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
