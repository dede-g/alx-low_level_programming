#include "main.h"

/**
 * islower - checks whether an alphabet is in lowercase or not
 * @c: alphabet to be checked
 * 
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	else
		return (0);	
}
