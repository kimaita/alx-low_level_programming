#include "main.h"

/**
 *jack_bauer - function that prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int h, hh, m, mm;

	for (h = 0; h < 3; h++)
	{
		for (hh = 0; hh < 10; hh++)
		{
			if (h == 2 && hh > 3)
				break;
			for (m = 0; m < 6; m++)
			{
				for (mm = 0; mm < 10; mm++)
				{
					_putchar(h + '0');
					_putchar(hh + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(mm + '0');
					_putchar('\n');
				}
			}
		}

	}
}
