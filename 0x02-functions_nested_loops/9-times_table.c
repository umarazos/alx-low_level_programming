#include "main.h"

/**
 * times_table - prints the 9 times table.
 */
void times_table(void)
{
	int n, x, y;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			y = n * x;

			if (y <= 9)
				_putchar(' ');
			else
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
