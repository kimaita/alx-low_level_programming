#include<stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = '0';
	while (x < '8')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				putchar(x);
				putchar(y);
				putchar(z);
				z++;
				if (x == '7')
					break;
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
