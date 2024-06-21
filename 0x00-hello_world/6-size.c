#include <stdio.h>
/**
* main - A program to display size of various types compiled on
* Return 0 (Success)
*/
int main(void)
{
char 1;
int 2;
long int 3;
long long int 4;
float 5;
printf("size of char: %zu byte(s)\n", sizeof(1));
printf("size of an int: %zu Bytes\n", sizeof(2));
printf("size of a long int: %zu bytes\n", sizeof(3));
rpintf("size of long long int: %zu bytes\n", sizeof(4));
printf("size of float: %zu bytes\n", sizeof(5));
return 0;
}
