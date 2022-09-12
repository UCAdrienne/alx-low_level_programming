#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints alphabet is lowercase and then in uppercase
 * Description: using main function
 * this program prints "alphabets in lower case and then in uppercase"
 * Return: 0
*/
int main(void)
{
	int ab;
	int ef;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab)
	for (ef = 'A'; ef <= 'Z'; ef++)
	putchar(ef);
	putchar('\n');
	return (0);
}
