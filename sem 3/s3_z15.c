#include <stdio.h>

#define MAX 10


void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }   
        }
    }
}


int main()
{
    float A[MAX][MAX];
    float B[MAX][MAX];
    float C[MAX][MAX];

    for (int i = 0; i < MAX; ++i) 
    {
        for (int j = 0; j < MAX; ++j) 
        {
            scanf("%i", &A[i][j]);   
        }
    }
    printf("\n");
    for (int i = 0; i < MAX; ++i) 
    {
        for (int j = 0; j < MAX; ++j) 
        {
            scanf("%i", &B[i][j]);   
        }
    }

    multiply(A, B, C, MAX);

    for (int i = 0; i < MAX; ++i) 
    {
        for (int j = 0; j < MAX; ++j)
            printf("%i ", C[i][j]);

    }
    printf("\n");
}