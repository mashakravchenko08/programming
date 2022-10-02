#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) 
{   
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int x1, x2, y1, y2, r1, r2;
    scanf("%i %i %i", &x1, &y1, &r1);
    scanf("%i %i %i", &x2, &y2, &r2);
    double d = distance(x1, y1, x2, y2);
    int r = r1 + r2;
    if (d > r)
        printf("Do not intersect");
    else if (d == r)
        printf("Touch");
    else
        printf("Intersect");

    
}