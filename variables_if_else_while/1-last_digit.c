#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return; Always
 */
int main(void)
{
	int n ldo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldo = n % 10
	if (ldo > 5) {
	printf("ldo is greater than %d is %d and is greater than 5", n, ldo)
	}
	else if(ldo == 0){
	printf("ldo is equal to %d is %d and is 0", n, ldo)
	}
	else {
	printf("ldo is less than %d and not 0 is %d and is less than 6 and not 0" n, ldo)
	}
	return (0);
}
