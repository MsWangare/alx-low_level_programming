#include "main.h"

/**
 * _memcpy - man memcpy
 * @dest: man memcpy
 * @src: man memcpy
 * @n: man memcpy
 *
 * Return: man memcpy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (dest[n] != 0)
		n++;
	return (src);
}
