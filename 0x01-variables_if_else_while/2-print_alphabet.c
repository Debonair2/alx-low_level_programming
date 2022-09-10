#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet -  prints the lowercase alphabet
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';
	int blessing;

	for (blessing = 0; blessing < 26; blessing++)
	{
		putchar(c + blessing);
	}
		putchar(10);
}
