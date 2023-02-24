#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int positive_or_negative(int i)
{
	int n;

if (n > 0)
	{	putchar('+');
		return (1);
	}
	else if (n < 0)
	{	putchar('-');
		return (-1);
	}
	else
	{	putchar('0');
		return (0);
	}
}
#endif /* MAIN_H */
