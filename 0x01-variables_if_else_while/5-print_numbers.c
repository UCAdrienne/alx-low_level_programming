#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base ten starting
 * from zero
 * Description: Using the main function
 * this program prints "single digits from base ten starting from zero"
 * Return: 0
 */
int main(void)

{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x == '9')
		putchar('\n');

	}
	return (0);
}
