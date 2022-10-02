#include <stdio.h>
void mult2_array(int* p, size_t n)
{
    for (size_t j=0; j<n; ++j)
    {   
        int* u = p +j;
        *u *=2;
    }

}
int main()
{
int numbers[6] = {4, 8, 15, 16, 23, 42};
int* p = &numbers[0];
size_t n= 6;
mult2_array(p, n);
for (size_t i = 0; i < n; ++i)
    printf("%i ", numbers[i]);
}