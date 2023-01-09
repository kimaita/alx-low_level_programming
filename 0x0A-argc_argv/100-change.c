#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * get_coins - get the number of coins needed
 * @change: change to get coins needed
 *
 * Return: number of coins
 */
int get_coins(int change)
{
	int coins = 0;

	while (change)
	{
	if ((change / 1) >= 1)
	{
		if ((change / 2) >= 1)
		{
			if ((change / 5) >= 1)
			{
				if ((change / 10) >= 1)
				{
					if ((change / 25) >= 1)
					{
						coins += change / 25;
						change %= 25;
					}
					coins += change / 10;
					change %= 10;
				}
				coins += change / 5;
				change %= 5;
			}
			coins += change / 2;
			change %= 2;
		}
		coins += change / 1;
		change %= 1;
	}
	}
	return (coins);
}
/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 (success), 1(Error)
 */
int main(int argc, char *argv[])
{
	int change, coins;

	coins = 0;
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	coins += get_coins(change);
	printf("%d\n", coins);
	return (0);
}
