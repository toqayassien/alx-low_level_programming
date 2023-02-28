#include "main.h"
#include <stdio.h>
/**
 *print_array -main entry
 *@n: elements
 *@a : string array
 */
void print_array(int *a, int n)/*print_array : for betty*/
{
	int index = 0;

	for (index = 0; index < n; index++)
	{
		printf("%d, ", a[index]);

		if (index == n - 1)
			continue;
	}
	printf("\n");
}	
