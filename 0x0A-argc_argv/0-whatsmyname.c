#include <stdio.h>

/**
 * main - prints its name.
 * @x: unused int.
 * @y: takes a string.
 *
 * Return: Always 0 on success.
 */
int main(int  __attribute__((unused)) x, char **y)
{
	printf("%s\n", *y);
	return (0);
}
