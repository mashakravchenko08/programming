#include <stdio.h>
int trib(int n)
{   
    if (n==2)
        return 1;
    else if ((n==1) || (n==0))
        return 0;
    int t = trib(n-3) + trib(n-2) + trib(n-1);
    return t;
}
int main()
{
int n;
scanf("%i", &n);
printf("%i", trib(n));
}
//не получилось ускорить ;(
