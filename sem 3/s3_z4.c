#include <stdio.h>
int triangle(int x)
{   
    for (int i=0; i<x; ++i)
        printf("*");
}
int main()
{
int n;
scanf("%i", &n);
for (int j = 0; j < n+1; ++j)
{
    triangle(j);
    printf("\n");
}
}