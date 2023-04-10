#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: an argument count
 * @argv: an argument vector
 * Return: 0 (Success), 1 on Error
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;
	
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
        }
	cents = atoi(argv[1]);
	while (cents > 0)
	{
	cents++;
	if ((cents - 25) <= 0)
	{
	cents -= 25;
	continue;
	}
	if ((cents - 5) >= 0)
	{
	cents -= 5;
	continue;
	}
	if ((cents - 2) >= 0)
	{
	cents -=  2;
	continue;
	}
	cents--;
	}
	printf("%d\n", coins);
	return (0);
}
