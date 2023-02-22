#include <stdio.h>
#include "main.h"
/**
 *naturals -entry point
 *desc: divide and sum
 */
int main(void)/*naturals: for betty*/
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
	}
		printf("%d\n", sum);
	
	return (0);
}
