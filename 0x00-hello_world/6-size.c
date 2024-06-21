#include <stdio.h>
/**
* main - A program to display size of various types compiled on
* Return 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of char: %zu byte(s)\n", sizeof(a));
printf("size of an int: %zu Bytes\n", sizeof(b));
printf("size of a long int: %zu bytes\n", sizeof(c));
rpintf("size of long long int: %zu bytes\n", sizeof(d));
printf("size of float: %zu bytes\n", sizeof(e));
return 0;
}
