

#include "main.h"

/**
 * _strncpy - man strncpy
 * @dest: man strncpy
 * @src: man strncpy
 * @n: man strncpy
 *
 * Return: man strncpy
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (dest[n] != 0)
		n++;
	return (src);
}
