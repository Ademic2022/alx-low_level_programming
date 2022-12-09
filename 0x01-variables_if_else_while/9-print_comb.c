#include <stdio.h>
/**
 * main - prints out all the numbers under 10 with a ,
 * Return: 0
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
