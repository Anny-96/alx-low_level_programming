#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
