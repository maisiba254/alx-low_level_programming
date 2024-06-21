#include <stdio.h>
/**
* main - A program to display size of various types compiled on
* Return 0 (Success)
*/
int main(void)
{
printf("size of char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d Byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
rpintf("size of long long int: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return 0;
}
