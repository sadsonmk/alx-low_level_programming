#include <stdio.h>

void start(void)__attribute__((constructor));

/**
 * start- is executed before the main function
 * Return: void
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
