#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers.
 * @x: number of arguments.
 * @y: array of arguments.
 *
 * Return: 0 on success and 1 on error.
 */
int main(int x, char *y[])
{
	int num1, num2, result;

	if (x < 3 || x > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(y[1]);
	num2 = _atoi(y[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
