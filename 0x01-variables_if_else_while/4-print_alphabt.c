#include <stdio.h>
/**
*main - Entry point
*Description: eliminates letters q and e from the alphabet
*Return: 0 Always success
*/
int main(void)
{
int ch;

for (ch ='a'; ch <= 'z'; ch++)
{if (ch != 'e' && != 'q')}
putchar(ch);
putchar('\n');
return(0);
}
