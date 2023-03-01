#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd n = (length_of_the_string - 1) / 2
 * @str: input
 */
void puts_half(char *str)
{
	int a, n, temp;

	temp = 0;

	for (a = 0; str[a] != '\0'; a++)
		temp++;

	n = (temp / 2);

	if ((temp % 2) == 1)
		n = ((temp + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
