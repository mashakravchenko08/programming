#include <stdio.h>
#include <math.h>

struct point
{
    double x, y;
};

typedef struct point Point;

struct triangle
{
    Point a, b, c;
};

typedef struct triangle Triangle;

void print_point(Point a) 
{
    printf("(%f, %f)", a.x, a.y);
}
void print_triangle(Triangle a) 
{
    printf("(%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)", a.a.x, a.a.y, a.b.x, a.b.y, a.c.x, a.c.y);
}

double distance(Point a, Point b) 
{   
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double get_triangle_perimeter(const Triangle d)
{
    return (distance(d.a, d.b) + distance(d.b, d.c) + distance(d.c, d.a));
}

double get_triangle_area(const Triangle d)
{
    return sqrt((get_triangle_perimeter(d) / 2) * ((get_triangle_perimeter(d) / 2) - distance(d.a,d.b)) * ((get_triangle_perimeter(d) / 2) - distance(d.b,d.c)) * ((get_triangle_perimeter(d) / 2) - distance(d.c,d.a)));
}

Triangle moved_triangle(const Triangle d, Point s)
{
    struct triangle g;
    g.a.x = d.a.x + s.x;
    g.a.y = d.a.y + s.y;
    g.b.x = d.b.x + s.x;
    g.b.y = d.b.y + s.y;
    g.c.x = d.c.x + s.x;
    g.c.y = d.c.y + s.y;
    return g;
}
Triangle move_triangle(struct triangle* p, Point s)
{
    (*p).a.x = (*p).a.x + s.x;
    (*p).a.y = (*p).a.y + s.y;
    (*p).b.x = (*p).b.x + s.x;
    (*p).b.y = (*p).b.y + s.y;
    (*p).c.x = (*p).c.x + s.x;
    (*p).c.y = (*p).c.y + s.y;
    return *p;
}

int main()
{   
    typedef struct point Point;
    typedef struct triangle Triangle;
    struct point s = {2.0, 4.0};
    struct point a = {1.0, 1.0}; 
    struct point b = {4.0, 4.0};
    struct point c = {5.0, 1.0};
    struct triangle d = {a, b, c};
    struct triangle* p = &d;
    printf("%.2lf\n", get_triangle_perimeter(d));
    printf("%.2lf\n", get_triangle_area(d));
    print_triangle(moved_triangle(d,s));
    printf("\n");
    print_triangle(move_triangle(p,s));
}