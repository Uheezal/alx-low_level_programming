#include <stdio.h>
/**
 * main - print alphabet reversed using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');

	return (0);
}
