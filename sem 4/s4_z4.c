#include <stdio.h>
#include <math.h>

unsigned long long fact(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    result *= i;
    return result;
}

long double div(int n)
{
    long double x = 0.0;
    if (n%2)
        {
        x = fact(n) / fact ((n - 1) / 2) / pow(M_PI, (n-1) / 2);
        }
    else
        {
        x = fact(n/2) * pow(2, n) / pow (M_PI, n/2);
        }
    return x;
    
}
int main()
{
    int n;
    scanf("%i", &n);
    if (n == 1)
        printf("1");
    else
        printf("%.6Lf\n", div(n));
}