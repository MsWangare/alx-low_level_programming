#include "main.h"

/**
 * _atoi - man atoi
 * @s: man atoi
 *
 * Return: man atoi
 */


int _atoi(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
