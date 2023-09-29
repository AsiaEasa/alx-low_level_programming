#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{int get_endianness(void)
	{
		int value = 1;
		char* ptr = (char *)&value;

		return ((int *)*ptr);
	}
