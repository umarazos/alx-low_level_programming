#include "main.h"
#define B_SIZE 8

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit
 * @index: the index (starting at 0)
 *
 * Return: The value of bit at index,
 * -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * B_SIZE))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
