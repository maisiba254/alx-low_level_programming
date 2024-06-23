#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Return: 0 (success)
 **/
int main(void)
{
int n;
srand(time(0));
n = rand();
	if (n > 0)
		printf("is positive\n"), n);
	else if (n < 0)
		printf("is negative\n"), n);
	else
		printf("is zero"), n);
return (0);
}


