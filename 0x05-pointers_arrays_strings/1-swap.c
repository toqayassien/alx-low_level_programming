#include "main.h"
/**
 *swap_int -main entry
 *@a :int first
 *@b :int second
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = *a;
}
