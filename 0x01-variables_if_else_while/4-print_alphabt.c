#include <stdio.h>

/**
 * main - Prints letter from a-z with exception of q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}

	putchar('\n');
	return (0);
}
