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
	int c d;

	for (c = 0; c < 9; c++)
	{
	for (d = c +1; d < 10; d++)
	{
		putchar((c % 10) + '0');
		putchar((d % 10) + '0');
	if (c == 8 && d == 9)
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
