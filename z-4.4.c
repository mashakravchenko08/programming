#include <stdio.h>


int main(){
    int inc, dec, equal, b, n;
    inc = dec = equal = 1;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
    {
        if (i == 0){
            int a;
            scanf("%i", &a);
            b = a;
        }
        else {
            int a;
            scanf("%i", &a);
            if (b > a) {
                inc = 0;
                equal = 0;
            }
            else if (b == a) {
                inc = 0;
                dec = 0;
            }
            else if (b < a) {
                dec = 0;
                equal = 0;
            }
        }
        
    }

    if (inc == 1)
        printf("Increasing\n");
    else if (dec == 1)
        printf("Decreasing\n");
    else if (equal == 1)
        printf("Equal\n");
    else
        printf("None\n");
}
