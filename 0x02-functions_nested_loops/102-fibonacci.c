#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *	starting with 1 and 2 follewed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 1, b = 2, count = 0;

	while (count < 50)
	{
		printf("%d, ", a);
		int c = a + b;

		a = b;
		b = c;
		count++;
	}
	printf("\n");

	return (0);
}
