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
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);

		if (ch != 57)
		{
			putchar(44);

			putchar(32);

		}
	}
	putchar(10);

	return (0);

}
