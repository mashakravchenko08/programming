#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
        for (int i = 0; i < n; ++i)
            scanf("%i", &a[i]);
    int l, r;
    scanf("%i %i", &l, &r);
    int count = r;
    for  (int i = 0; i < r; ++i)
        if ((l <= i) && (i< r))
            {
            a[i] = a[count];
            count++;
            }
    
    for (int i = 0; i < n - (r-l); ++i)
        printf("%i ", a[i]);
        printf("\n");
}