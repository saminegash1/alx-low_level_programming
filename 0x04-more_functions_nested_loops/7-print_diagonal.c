#include "main.h"

/**
* print_diagonal -> printing line
* @size: integer params
*/
void print_diagonal(int size)
{
	int x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for(i = 0; i <= x; i ++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
		_putchar('\n');
	}
}
