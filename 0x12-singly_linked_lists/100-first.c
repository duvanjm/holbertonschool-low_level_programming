#include <stdio.h>

void before_the_main(void)__attribute__ ((constructor));

/**
 * myStartupFun - function 
 */
void before_the_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
