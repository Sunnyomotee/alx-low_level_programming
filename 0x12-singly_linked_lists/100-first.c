#include <stdio.h>

void __attribute__((constructor)) hare(void);
/**
 * before_main - function that executes before the main function
 * Return: nothing
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
