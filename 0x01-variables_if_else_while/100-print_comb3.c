#include <stdio.h>

/**
 * main - main function all possible different combinations of two digits
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;

	for  (n = 0; m < 9; n++)
	{
		for (m = n + n; m < 10; m++)
		{
			putchar((n % 10) + '0');
			putchar((m % 10) + '0');

			if (n == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
