#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - main block 
  * Description: Print statements based on the last digit of the random number.
  * Return: 0
  */

/* betty style doc for function main goes there  */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */

	if (m > 5)	
	 printf("Last digit of %i is %i and is greater than 5\n",		 n, m);
	else if (m == 0)
	printf("Last digit of %i is %i1:wq
		      	and is 0\n", n, m);	
	else	  
   printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       			n, m);
	return (0);
}


