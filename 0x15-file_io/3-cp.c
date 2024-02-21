#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * print_error - prints error message
 * @exit_code: exit code number
 * @error_message: error message to print
 * Return: Nothing
 */
void print_error(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO,"%s\n", error_message);
	exit(exit_code);
}

/**
 * main -  copies the content of a file to another file.
 * @argc
