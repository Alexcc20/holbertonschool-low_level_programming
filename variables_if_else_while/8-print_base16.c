#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
