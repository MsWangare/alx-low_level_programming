#include "main.h"

/**
 * print_binary - prints binary
 * @n: int to print
 *
 * Return: void function.
 */

void print_binary(unsigned long int n)
{
	unsigned int count = 0;
	unsigned long int copy = n;
	int i;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	while (n)
	{
		count++;
		n >>= 1;
	}

	n = copy;

	for (i = count - 1; i >= 0; i--)
		_putchar(48 + ((n >> i) & 1U));
}
