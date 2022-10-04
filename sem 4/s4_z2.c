#include <stdio.h>
unsigned long long fact(int n, int k)
{
    unsigned long long result = 1;
    for (unsigned long long i = n-k+1; i <= n; ++i)
        result *= i;
    return result;
}
int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    printf("%llu\n", fact(n, k));
}