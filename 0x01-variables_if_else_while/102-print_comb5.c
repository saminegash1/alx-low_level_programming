#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
    int ch;
    int n;
    int k;
    int m;
    for (ch = 48; ch <= 57; ch++)
    {
        for (n = 48; n <= 57; n++)
        {
            for (k = 48; k <= 57; k++)
            {
                for (m = 48; m <= 57; m++)
                {
                    putchar(ch);
                    putchar(n);
                    putchar(32)
                        putchar() if (ch != 57 || m != 57)
                    {
                        putchar(44);
                        putchar(32);
                    }
                }
            }
        }
    }

    putchar(10); /* this is an ascii code for new line*/

    return (0);
}
