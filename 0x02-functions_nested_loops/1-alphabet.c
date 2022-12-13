#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
