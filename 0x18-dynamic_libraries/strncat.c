#include "main.h"

/**
 * _strncat - man strncat
 * @dest: man strncat
 * @src: man strncat
 * @n: man strncat
 *
 * Return: man strncat
 */

char *_strncat(char *dest, char *src, int n)
{
	while (dest[n] != 0)
		n++;
	return (src);
}
