#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	ch = 97;
	i = 0;
	while (i < 23)
	{
		putchar(ch);
		ch++;
		i++;
	}
	return (0);
}