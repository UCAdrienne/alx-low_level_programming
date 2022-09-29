#include "main.h"
/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	
	else
		return (check_prime(n, 2));

}
