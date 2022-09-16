#include <stdio.h>
#include <limits.h>

int main()
{   int min = INT_MAX;
    int max = INT_MIN;
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%i", &a);
        if (!(a % 2) && (a < min))
            min = a;
        else if ((a % 2) && (a > max))
            max = a;
    }
    
    if (min == INT_MAX)
        printf("None ");
    else
        printf("%i ", min);
    
    if (max == INT_MIN)
        printf("None\n");
    else
        printf("%i\n", max);
    
}