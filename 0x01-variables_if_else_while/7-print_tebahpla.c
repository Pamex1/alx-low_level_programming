#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Function to print the alphabet
 * in reverse lower case
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		char lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
