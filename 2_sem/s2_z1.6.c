#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    int count = 0;
    int sch = 0;
    int b[1000];
    int c[1000];
    for  (int i = 0; i < n; ++i)
    {
        if (!(a[i]%2) || (a[i]==0))
        {
            c[sch] = a[i];
            sch++;
        }
        else if (a[i]%2)
        {
            b[count] = a[i];       
            count++;
        }
    }
    for (int i = 0; i < count; ++i)
        a[i] = b[i];
    for (int i = 0; i < sch+1; ++i)
        a[i+count] = c[i];
    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
        printf("\n");
}