#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 * Description:negative or positive
 * Return:0
 */
int main(void) /*main: description for betty*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}
