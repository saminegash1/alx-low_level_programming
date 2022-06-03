#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int n;

for (n = 48; n <= 57; n++)
{

putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{

putchar(ch);
}

putchar(10);

return (0);
}
