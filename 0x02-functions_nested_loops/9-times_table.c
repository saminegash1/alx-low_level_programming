#include "main.h"

/**
*times_table -> time table
*/
void times_table(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = x * y;
			if (y == 0)
				_putchar(k + '0');
			if (y != 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
