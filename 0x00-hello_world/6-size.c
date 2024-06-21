#include <stdio.h>
int main(void)
{
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu Bytes\n", sizeof(int));
printf("size of a long int: %zu bytes\n", sizeof(long int));
rpintf("size of long long int: %zu bytes\n", sizeof(long long int));
printf("size of float: %zu bytes\n", sizeof(float));
return 0;
}
