#include <stdio.h>
#include <string.h>
struct date
{
    int day, month, year;
};
typedef struct date Date;
struct movie
{
    char title[50];
    float rating;
    struct date release_date;
};
typedef struct movie Movie;
void polyprint(const char* type, void* p)
{
    if (strcmp(type, "Integer")==0)
    {
        int* q = (int*)p;
        printf("%i\n", *q);
    }
    else if (strcmp(type, "Float")==0)
    {   
        float* q = (float*)p;
        printf("%.1f\n", *q);
    }
    else if (strcmp(type, "Character")==0)
    {   
        char* q = (char*)p;
        printf("%c\n", *q);
    }
    else if (strcmp(type, "Date")==0)
    {   
        struct date* q = (struct date*)p;
        printf("%i, %i, %i\n", q->day, q->month, q->year);
    }
    else if (strcmp(type, "Movie")==0)
    {   
        struct movie* q = (struct movie*)p;
        printf("%s, %.3f, ", q->title, q->rating);
        struct date* m = &(q->release_date);
        printf("{%i, %i, %i}\n", m->day, m->month, m->year);
    }   
    else if (strcmp(type, "String")==0)
    {   
        char* q = (char*)p;
        printf("%c\n", *q);
    }
    /*else if (strcmp(type, "IntegerArray 15")==0)
    {   
        int* q = (int*)p;
        printf("%c\n", *q);    не понимаю как это реализовать;(
    }*/
    else 
        printf("Error!");
        
}
int main()
{
    int a = 123;
    polyprint("Integer", &a);
    float b = 1.5;
    polyprint("Float", &b);
    char c = 'T';
    polyprint("Character", &c);
    Date d = {15, 5, 1970};
    polyprint("Date", &d);
    Movie e = {"Inception", 8.661, {8, 6, 2010}};
    polyprint("Movie", &e);
    char f[] = "Sapere Aude";
    polyprint("String", f);
    //int g[] = {10, 20, 30, 40, 50};
    //polyprint("IngerArray 5", g);
}