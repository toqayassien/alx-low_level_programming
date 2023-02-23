#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;/*i is not incremented*/

        while (i < 10)/*i not incremented*/
        {
                putchar(i);/*i is not incremented*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
