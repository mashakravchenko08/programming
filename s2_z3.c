#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }
    int k;
    for (int j = 0; j < n; ++j)
    {
        if (a[j+1] < a[j])
        {
            k = j;
            break;
        }
    }
    printf("%i ", k);
    printf("\n");

}
