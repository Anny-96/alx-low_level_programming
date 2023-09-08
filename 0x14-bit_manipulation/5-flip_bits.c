#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: bit count to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int xor_result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor_result >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
