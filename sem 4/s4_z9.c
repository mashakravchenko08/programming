#include <stdio.h>
#include <math.h>

int main()
{
printf("%hhi\n", sizeof(char));
printf("%hi\n", sizeof(short));
printf("%i\n", sizeof(int));
printf("%lli\n", sizeof(long long));
printf("%zu\n", sizeof(size_t));
printf("%i\n", sizeof(float));
printf("%i\n", sizeof(double));
printf("%i\n", sizeof(int*));
printf("%i\n", sizeof(int[10]));
}