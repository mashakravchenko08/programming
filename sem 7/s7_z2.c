#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{   

    float* get_geometric_progression(float a, float r, int n)
    {
        float* p = (float*)malloc(n * sizeof(float));
            for (size_t i = 0; i<n; ++i)
                p[i] = a * pow(r, i);
        return p;
    }

    void print_array(float* array, int n)
    {
        for (int i = 0; i < n; ++i)
        {
            printf("%.1f ", array[i]);
            printf("\n");
        }
    }

    float a,r;
    int n;
    a = 3.0;
    r = 3.0;
    n = 10;
    float* p = get_geometric_progression(a, r, n);
    print_array(p, n);
    free(p);
}