#include <stdio.h>

/**
 * main - Prints lowercase alphabets z-a
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
