#include <stdio.h>
/**
*main - entry point
*Description: lower and uppercase letters
*Return: 0 Always successx
*/
int main(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);

putchar('\n');

return (0);
}
