#include "main.h"

/**
 * rev_string - reverses a string permanent
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char tmp;

	while (s[length] != '\0')
		length++;
	end = length - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
