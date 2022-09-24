#include <stdio.h>
int print_even(int x)
{   
    if ((x % 2))
        return 0;
    else
        return 1;
}
int main()
{
int a, b;
scanf("%i %i", &a, &b);
for (int i = a; i < b + 1; ++i)
{
    if (print_even(i))
        printf("%i ", i);
}
}