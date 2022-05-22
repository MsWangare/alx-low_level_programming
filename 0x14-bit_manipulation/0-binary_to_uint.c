#include "main.h"

/**
 * _expo - raise num by the exponent power
 * @num: number to be raised
 * @expo: the exponent
 *
 * Return: the exponentiated number
 */

int _expo(int num, int expo)
{
	int result = 1;

	for (; expo > 0; expo--)
	{
		result = result * num;
	}
	return (result);
}

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: the string containing 0's and 1's to be converted to integer
 *
 * Return: binary converted to uunsinged int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, uint = 0, digits = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != 0; i++)
		digits++;
	digits--;

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		uint += (b[i] - 48) *  _expo(2, digits - i);
	}

	return (uint);
}
