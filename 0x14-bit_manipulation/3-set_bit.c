#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{int rem, int_num = 0, base = 1;
	unsigned int i, x, a[100] __attribute__((unused));

	if (index > 63)
		return (-1);

	for (i = 0; *n > 0; i++)
	{
		a[i] = *n % 2;
		*n = *n / 2;

		if (i == index)
			a[i] = 1;
	}

	for (x = 0; x <= i; x++)
	{rem = a[i] % 10;
		int_num = int_num + rem * base;
		a[i] = a[i] / 10;
		base = base * 2;
	}
	*n = int_num;
	return (1);
}
