#include "main.h"

/**
 * flip_bits - counts number of bits you would need to flip
 * to get from one number to another.
 * @n: the num
 * @m: times the num was flipped
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flip = 0;

	while (xor > 0)
	{
		flip += (xor & 1);
		xor >>= 1;
	}

	return (flip);
}
