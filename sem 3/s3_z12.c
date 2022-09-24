#include <stdio.h>

int sort(int array[], int size)
{   
    for (int i = 0; i<size; ++i)
    {
        int max_index = i;
        for (int k = i + 1; k < size; ++k)
        {
            if (array[k] > array[max_index])
                max_index = k;
        }

        int temp = array[i];
        array[i] = array[max_index];
        array[max_index] = temp;
    }
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i=0; i<size; ++i)
        scanf("%i", &array[i]);
    sort(array, size);
    for (int j=0; j<size; ++j)
        printf("%i ", array[j]);
}