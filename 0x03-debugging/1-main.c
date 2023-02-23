#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* While: i is not incremented
* @i : not incremented
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)/*i not incremented*/
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
