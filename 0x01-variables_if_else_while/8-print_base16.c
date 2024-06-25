#include <stdio.h>
/**
*main - Entry point
*Return: 0 Always success
*/
int main(void)
{
int ch;
int num;

for (num = '0'; num <= '9'; num++)
putchar(num);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
