#include <stdio.h>

/**
 * main - prints out all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	a = 'a';

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
