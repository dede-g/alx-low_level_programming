#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: argumnet count (should be 2)
 * @argv: amount of money
 *
 * Return: 0(Sucess) , 1(failure)
 */

int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, twocents, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		quarters = cents / 25;
		dimes = (cents % 25) / 10;
		nickels = ((cents % 25) % 10) / 5;
		twocents = (((cents % 25) % 10) % 5) / 2;
		pennies = (((cents % 25) % 10) % 5) % 2;
		printf("%d\n", quarters + dimes + nickels + twocents + pennies);
	}
	return (0);
}
