#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of character
 *
 * Return: return the converted num on success,
 * and 0 if character(s) is NULL, or not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if ((b[i] != '1') && (b[i] != '0'))
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		result <<= 1;
		if (b[i] == '1')
		{
			result += 1;
		}
		i++;
	}
	return (result);
}
