#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @x: number of arguments passed.
 * @y: array of arguments.
 *
 * Return: Always 0 on success.
 */
int main(int x, char *y[])
{
	int i;

	i = 0;
	while (i < x)
	{
		printf("%s\n", y[i]);
		i++;
	}
	return (0);
}
