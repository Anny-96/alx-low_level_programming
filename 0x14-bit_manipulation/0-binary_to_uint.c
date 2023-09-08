#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @c: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *c)
{
	int a;
	unsigned int dec_val = 0;

	if (!c)
		return (0);

	for (a = 0; c[a]; a++)
	{
		if (c[a] < '0' || c[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (c[a] - '0');
	}

	return (dec_val);
}
