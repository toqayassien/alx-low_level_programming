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

        i = 0;/*i not incremented*/

        while (i < 10)/*i not incremented*/
        {
                putchar(i);/*i is not incremented*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
