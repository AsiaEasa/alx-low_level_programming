#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, num, x, n;
	int int_num = 0;

	x = strlen(b);
	num = atoi(b);

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{

		if (b[n] < '0' || b[n] > '1')
			return (0);
	}

	for (i = x - 1; i >= 0; i--)
	{
		int_num = 2 * int_num + (b[i] - '0');
	}
	return (int_num);
}
