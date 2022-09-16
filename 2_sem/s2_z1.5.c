#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int count = 0;
    int b[1000];
    for  (int i = 0; i < n; ++i)
        if (a[i]>=0)
        {
            b[count] = a[i];       
            count++;
        }
    for (int i = 0; i < count; ++i)
        a[i] = b[i];
    for (int i = 0; i < count; ++i)
        printf("%i ", a[i]);
        printf("\n");
}