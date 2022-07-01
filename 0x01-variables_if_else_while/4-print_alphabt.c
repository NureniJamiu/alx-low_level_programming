#include <stdio.h>

/**
 * main - This program prints all the alphabets
 * in lowercase excluding the q and e characters
 * and explictly uses the putchar() function
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		if (letters != 'e' && letters != 'q')
			putchar(letters);
	putchar('\n');
	return (0);
}
