#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: A character
 *
 * Return: Returns 1 if the arg. is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
