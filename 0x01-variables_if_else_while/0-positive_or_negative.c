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
	printf("%d is positive\n");
	else if (n < 0)
	printf("%d is negative\n");
	else (n == 0)
	printf("%d is zero");
return (0);
}


