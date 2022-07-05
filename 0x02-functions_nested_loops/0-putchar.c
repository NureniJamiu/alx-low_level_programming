# include "main.h"

/**
* main - prints 'putchar' string followed by a new line
*
* Return: 0
*/

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
