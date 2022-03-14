#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/** 
  *main - main block
  *Description: Get a random number and print the number
  * and if it is positive, negative, or zero
  *  Return: 0
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */	
	if	 (n > 0)	
		printf("%i is positive\n", n);	
	else if		 
		(n < 0)			
			printf("%i is negative\n", n);
	else			
		printf("%i is zero\n", n);
	return (0);
}


