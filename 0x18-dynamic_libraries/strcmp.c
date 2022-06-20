#include "main.h"

/**
 * _strcmp - man strcmp
 * @s1: man strcmp
 * @s2: man strcmp
 *
 * Return: man strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != s2[i])
		i++;
	return (i);
}
