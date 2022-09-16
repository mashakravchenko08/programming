#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j<n; ++j)
        {
            scanf("%i", &a[i][j]);
        }
    }
    printf("\n");
    int b[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j<n; ++j)
        {
            scanf("%i", &b[i][j]);
        }
    }
    int c[n][n];
    for (int i = 0; i < n; ++i)
       for (int j = 0; j<n; ++j)
            c[i][j]=0;
    for (int i = 0; i < n; ++i)
    {   for (int j = 0; j<n; ++j)
        {   for (int k=0; k<n+1; ++k)
            {
                c[i][j]=c[i][j]+ a[i][k]*b[k][j];
            }  
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j=0; j<n; ++j)
            printf("%i ", c[i][j]);
        printf("\n");
    }
}
   