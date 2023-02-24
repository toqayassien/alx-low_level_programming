#include "main.h"

void positive_or_negative(int i)/*print_sign: for betty*/
{
	if (i > 0)
	{	printf ("%d is positive", i);
	}
	else if (i < 0)
	{	printf ("%d is negative", i);
	}
	else
	{	printf ("%d is zero", i);
	}
	return (0);
}
