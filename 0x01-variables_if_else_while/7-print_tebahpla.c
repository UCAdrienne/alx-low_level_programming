#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse followed by a new line
 * Description: using the main function
 * this program prints "Prints lower case alphabest in reverse order"
 * Return: 0
*/
int main(void)

{
	int t;

	for (t = 'z'; t >= 'a'; t--)
	{
		putchar(t);

		if (t == 'a')
		putchar ('\n');

	}
	return (0);
}
