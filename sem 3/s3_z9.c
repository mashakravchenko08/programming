#include <stdio.h>
int last_digits(int array[], int size)
{   
    for (int i = 0; i<size; ++i)
        array[i] = array[i]%10;
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i=0; i<size; ++i)
        scanf("%i", &array[i]);
    last_digits(array, size);
    for (int j=0; j<size; ++j)
        printf("%i ", array[j]);
}
