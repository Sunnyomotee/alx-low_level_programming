#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabet
 * Return: 0
 */

int main(void)
{

	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
