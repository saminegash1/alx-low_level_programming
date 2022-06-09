#include "main.h"

/**
* print_diagonal -> printing line
* @n: integer params
*/
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar('\');
		_putchar('\n');
	}
}
