#include "main.h"

/**
 * _isupper - returns the largest of 3 numbers
 *  @c: char to check if is upper case 
 *   Return: 1 if is upper case 0 if not
 */
int _isupper(int c)
{	
	if (c > 64 && c < 91)
		return (1);	
	return (0);
 }
