#include <stdio.h>


int main(){
    int n;
    scanf("%i", &n);
    if (((n >= 0 && n <= 20) || (n >100 && n <200)) && !(n % 2))
        printf("Yes\n");
    else
        printf("No\n");
}