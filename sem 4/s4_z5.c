#include <stdio.h>
#include <math.h>

long double pi(int n)
{
    long double p = 0;
    for (int i=1; i <= n; ++i)
    {
        p += (4 * pow(-1, i+1)) / (2*i-1);   
    }
    return p;
}
int main()
{
    int n;
    scanf("%i", &n);
    printf("%Lf", pi(n));
}