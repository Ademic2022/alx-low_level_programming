#include <stdio.h>

/**
 * main - prints out the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char a =  'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
