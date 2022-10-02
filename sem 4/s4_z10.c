#include <stdio.h>
float cube(float* p)
{
    float c = *p * *p * *p;
    return c;
}
int main()
{
float numbers[6] = {4.01, 8.02, 15.03, 16.04, 23.05, 42.06};
float* p = &numbers[3];
printf("%f", cube(p));
}