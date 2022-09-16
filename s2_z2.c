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
    int x;
    scanf("%i", &x);
    int min_index = 0;
    int count = 0;
    for (int j = 0; j < n; ++j)
    {
        if (count>=1) 
            break;
        else if (a[j] >= x)
        {    
            min_index = j;
            count++;
        }
    }
    if (count == 0)
        printf("%i", n);
    else
        printf("%i ", min_index);
    printf("\n");

}
