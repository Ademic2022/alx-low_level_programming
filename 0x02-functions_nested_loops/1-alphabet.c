#include <stdio.h>

/**
 * main - check the code
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

int main(void)
{
	print_alphabet();

	return (0);
}
