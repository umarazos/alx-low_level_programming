#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Comma seperated in ascending order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
