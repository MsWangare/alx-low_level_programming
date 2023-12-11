#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
	{
		printf("Last digit of %d is %d and is greater than 10\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}

