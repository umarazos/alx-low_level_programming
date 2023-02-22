#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int num;
	char lc;

	for (num = 0; num <= 9; num++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
