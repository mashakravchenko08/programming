#include <stdio.h>

int revers(int array[], int size)
{   
    for (int i = 0; i<size/2; ++i)
    {
        int t = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = t;
    }
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i=0; i<size; ++i)
        scanf("%i", &array[i]);
    revers(array, size);
    for (int j=0; j<size; ++j)
        printf("%i ", array[j]);
}