#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Main function
 * Return: always 0(Success)
 */


int main(void)
{
	int n;
	/* Main code starts here*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	printf("\n");
	return (0);
}

