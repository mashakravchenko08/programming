#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int k;
    scanf("%i", &k);
    int b[1000];
    int j;
    for  (int i = 0; i < n; ++i)
        {
        j = (i + k) % n;
        b[j] = a[i];
        }
    for (int i = 0; i < n; ++i)
        a[i] = b[i];
    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
        printf("\n");
}