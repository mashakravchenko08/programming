#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j<m; ++j)
        {
            scanf("%i", &a[i][j]);
        }
    }
    int b[1000];
    b[0]=0;
    for (int j=0; j<m; ++j)
    {
         for (int i=0; i<n; ++i)
            b[j]=b[j]+a[i][j];
    }
    for (int i = 0; i < m; ++i)
        printf("%i ", b[i]);
        printf("\n");
}
