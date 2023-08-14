#include <stdio.h>
#define NAME_H

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	#ifdef NAME_H
		printf("%s\n", __FILE__);
	#endif
	return (0);
}

