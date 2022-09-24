#include <stdio.h>
int sum_of_digits_rec(int x)
{   
    if (x<1)
        return 0;
    int sum = 0;
    sum = sum + (x % 10) + sum_of_digits_rec((x/10));
    return sum;

}
int main()
{
int a;
scanf("%i", &a);
printf("%i", sum_of_digits_rec(a));
}
