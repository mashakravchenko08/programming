#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) 
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double length(double x, double y) 
{
    return distance(x, y, 0, 0);
}

double scalar_product(double x1, double y1, double x2, double y2) 
{
    return x1 * x2 + y1 * y2;
}

const double pi = 3.14159265359;

double to_degrees(double rad) 
{
    return rad * 180 / pi;
}

double corner(double x1, double y1, double x2, double y2)
{
    double cr;
    cr = (scalar_product(x1, y1, x2, y2))/(length(x1, y1)*length(x2, y2));
    cr = acos(cr);
    double cd;
    cd = to_degrees(cr);
    return cd;
}

int main()
{
    double x1, x2, y1, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    printf("%g", corner(x1, y1, x2, y2));
}