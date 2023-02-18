#include <stdio.h>
/**
 * main - entry point
 *
 */

int main(void)
{
	char c;

	int a;

	c = 'a';
	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
