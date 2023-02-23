#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

    if (a > b && b > c)
    {
        printf("%d", a);
    }
    else if (b > a && a > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return (0);
}
