#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
