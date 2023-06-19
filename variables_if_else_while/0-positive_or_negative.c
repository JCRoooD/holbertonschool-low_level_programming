#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Positive and Negative */

/* assigning a random number to n */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Code to execute random n if negative or positve */
	if (n > 0){
	printf ("%d\n is positive", n);
	}
	else if (n = 0) {
	printf ("%d\n is zero", n);
	}
	else {
	printf ("%d\n is negative", n);
	}
	return (0);
}

