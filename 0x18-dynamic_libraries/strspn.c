

#include "main.h"

/**
 * _strspn - man strspn
 * @s: man strspn
 * @accept: man strspn
 *
 * Return: man strspn
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != accept[i])
		i++;
	return (i);
}
