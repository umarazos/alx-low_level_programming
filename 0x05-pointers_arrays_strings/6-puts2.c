#include "main.h"
/**
 * puts2 - prints every char of a string, starting with the first char
 * @str: input
 */
void puts2(char *str)
{
	int temp = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		temp++;
	}
	t = temp - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
