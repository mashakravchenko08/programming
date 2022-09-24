#include <stdio.h>
int fact(int a)
{   
    int f = 1;
    for (int j = 1; j< a+1; ++j)
        f = f*j;
    return f;
}
int factorials(int array[], int size)
{   
    for (int i = 0; i<size; ++i)
        array[i] = fact(array[i]);
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i=0; i<size; ++i)
        scanf("%i", &array[i]);
    factorials(array, size);
    for (int j=0; j<size; ++j)
        printf("%i ", array[j]);
}