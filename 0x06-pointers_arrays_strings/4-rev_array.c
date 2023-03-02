#include "main.h"
/**
 *reverse_array -main
 *@a: int array
 *@n: number of char
 */
void reverse_array(int *a, int n)
{
	int len = 0;
	int i = 0;

	while (a[i++])
		len++;

	for (i = len - 1; i >= n; i--)
		_putchar(a[index]);
}
