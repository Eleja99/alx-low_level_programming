#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is postive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
	{
	for (d = 1; d <= 10; d++)
	{
		if (d > c)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
