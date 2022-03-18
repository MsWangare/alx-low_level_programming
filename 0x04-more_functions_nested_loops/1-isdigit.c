#include "main.h"

/**
 *  _isdigit - returns the largest of 3 numbers
 *   @c: char to check if is digit
 *    Return: 1 if is digit case 0 if not 
 */
int _isdigit(int c)
{	
	if (c > 47 && c < 58)		
		return (1);	
	return (0);
}
