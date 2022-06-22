#include "main.h"

int check_prime(int, int);
/**
* is_prime_number -> prime identifier
* @n: is number
* Return: integer
*/
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


/**
* check_prime -> it check prime numbers
* @n: number
* @i: iterator
* Return: a 1 or 0
*/
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

