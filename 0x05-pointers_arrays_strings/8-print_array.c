#include "main.h"
#include <stdio.h>
/**
 *print_array -main entry
 *@n: elements
 *@a : string array
 */
void print_array(int *a, int n)/*print_array : for betty*/
{
	int pr;

	while (a[n++])
		pr++;
	printf ("%d, ", pr);
}	
