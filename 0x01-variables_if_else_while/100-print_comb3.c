#include <stdio.h>

/**
 * main - Prints all combinations of two digits with,
 * and space followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{

			putchar((num2 / 10) + '0');
			putchar((num % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
