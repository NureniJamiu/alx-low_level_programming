#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int fmt = ", ";

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(fmt);
	}
	putchar('\n');
	return (0);
}
