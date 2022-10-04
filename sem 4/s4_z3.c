#include <stdio.h>
float yearfrac(int year, int day)
{
    float result;
    if (!(year%4))
        result = day / 366.0;
    else
        result = day / 365.0;
    return result;
}
int main()
{
    int year, day;
    scanf("%i %i", &year, &day);
    printf("%.5f\n", yearfrac(year, day));
}