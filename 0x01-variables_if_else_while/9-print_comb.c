#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * Description: using the main function
 * this program prints all possible combinations of single-digit numbers
 * Return: 0
*/
int main(void)

{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);

		if (num == 9)
			continue;

		putchar(',');

		putchar(' ');

		putchar('\n');

	}
	return (0);
}
