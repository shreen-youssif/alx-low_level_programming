#include<stdio.h>

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
	int count;
	unsigned long a = 1, b = 2, sum = 0;

	while (count < 50)
	{
		printf("%lu, ", a);
		a = b;
		b = sum;
		count++;
	}
	printf("\n");

	return (0);
}
