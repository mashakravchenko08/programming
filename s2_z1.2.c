#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
        for (int i = 0; i < n; ++i)
            scanf("%i", &a[i]);
    int b, c;
    scanf("%i %i", &b, &c);
    if (c == n)
        a[n] = b;
    else 
    {
        for  (int i = n + 1; i > c; --i)
            a[i] = a[i-1];
        a[c+1] = b;
    }
    for (int i = 0; i < n + 1; ++i)
        printf("%i ", a[i]);
        printf("\n");
}