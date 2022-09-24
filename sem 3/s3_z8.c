#include <stdio.h>
int count_even(int array[], int size)
{   
    int count = 0;
    for (int i = 0; i<size; ++i)
        if (!(array[i] % 2))
           count++;
    return count;
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i=0; i<size; ++i)
        scanf("%i", &array[i]);
    printf("%i", count_even(array, size));
}
