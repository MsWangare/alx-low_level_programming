#include "main.h"

/**
 * get_bit - returns a bit
 * @index: index
 * @n: int
 *
 * Return: returns a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
