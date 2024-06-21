#include <stdio.h>
/**
* main - A program to display size of various types compiled on 32bit
* and 64bit machines
* Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("size of an int: %lu Byte(s)\n", (unsigned long) sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(e));
return (0);
}
