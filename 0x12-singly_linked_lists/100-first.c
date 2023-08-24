#include <stdio.h>

void pre_main_message(void) __attribute__((constructor));
/**
 * first - prints a sentence before the main
 * function is executed
 */
void pre_main_message() 
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

