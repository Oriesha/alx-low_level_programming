#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - Prints if number is positive or negative
 *@i : intiger
 * Return: 0
 *
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
