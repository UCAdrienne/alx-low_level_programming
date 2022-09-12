#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print the alphabet in lowercase, followed by a new line
 * Description: Using the main function
 * this program prints "all alphabets except 'q' and 'e'"
 * Return: 0
*/
int main(void)

{
	int ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'q')
		putchar(xj);

		if (ab == 'z')
		putchar('\n');
	}
	return (0);
}
