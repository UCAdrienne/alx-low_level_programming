#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 * Description: using the main function
 * this program prints all possible different combinations of two digits
 * Return: Always 0.
*/
int main(void)

{
	int ab;

	int p;

	for (ab = 48; ab <= 57; ab++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > ab)
			{
				putchar(ab);

				putchar(p);

				if (ab != 56 || p != 57)
				{
					putchar(44);

					putchar(32);

				}
			}
		}
	}
	putchar(10);

	return (0);
}
