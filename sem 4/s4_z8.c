#include <stdio.h>
#include <math.h>

double func(double x)
{
    double y = pow(x,2) - 2;
    return y;
}
int main()
{   
    double e = pow(10, -10);
    double l = 0;
    double h = 2;
    double m = (l+h)/2;
    while ((h-l)>e)
    {
        if (func(m)>=0)
        {
            h = m;
            m = (l+h)/2;
        }
        else
        {
            l = m;
            m = (l+h)/2;
        }
    }
    printf("%lf", m);
}