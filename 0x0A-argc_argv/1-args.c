#include <stdio.h>

/**
 * main - prints the number of its argument(s).
 * @x: number of argument(s).
 * @y: unused arg.
 *
 * Return: Always 0 on success.
 */
int main(int x, char **y __attribute__((unused)))
{
	printf("%d\n", x - 1);
	return (0);
}
