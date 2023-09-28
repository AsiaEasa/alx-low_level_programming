#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{int i, x __attribute__((unused));

	for (i = 31; i >= 0; i--)
	{
		int x = (1 << i);

		if (n & x)
		{
			_putchar('1');
			x++; }
		else if (x)
			_putchar('0');
	}
}
