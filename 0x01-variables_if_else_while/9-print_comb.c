#include <stdio.h>
/**
*main - Entry point
*Return: 0 Always success
*/
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar('0' + num);
	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
