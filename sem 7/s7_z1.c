#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{   
    //1

    long long* q =(long long*)malloc(sizeof(long long));

    if (q == NULL)
    {
        printf("Error. Can't allocate memory!\n");
        exit(1);
    }

    *q = 123;
    printf("%lli\n", *q);

    free(q);

    //2
    void* error_checked_malloc(size_t n)
{
    void* p = malloc(n);
    if (p == NULL)
    {
        printf("Error. Can't allocate memory!\n");
        exit(1);
    }
    return p;
}

    char* p = (char*)error_checked_malloc(sizeof(char) * 9);
    
    strcpy(p, "Elephant");

    printf("%s\n", p);

    free(p);

    //3

    char** pd = (char**)malloc(sizeof(char*));
    
    *pd = (char*)error_checked_malloc(sizeof(char)*14);

    strcpy(*pd, "Cats and Dogs");

    printf("%s\n", *pd);

    free(*pd);
    free(pd);

    //4

    struct book
    {
        char title[50];
        int pages;
        float price;
    };
    typedef struct book Book;

    void print_book(struct book* b) 
    {
        printf("Book: %s, Pages: %i, Price: %g\n", b->title, b->pages, b->price);
    }
    struct book* b =(Book*)error_checked_malloc(sizeof(Book));
    strcpy(b->title, "Don Quixote");
    b->pages = 1000;
    b->price = 750.0;
    print_book(b);
    free(b);
    //5
    struct book b1;
    strcpy(b1.title, "Don Quixote");
    b1.pages = 1000;
    b1.price = 750.0;
    struct book** pb = (Book**)error_checked_malloc(sizeof(Book*));
    *pb = &b1;
    printf("%p\n", pb);
    free(pb);
    //6
    struct book** pb1 = (Book**)error_checked_malloc(sizeof(Book*));
    *pb1 =(Book*)error_checked_malloc(sizeof(Book));
    strcpy((*pb)->title, "Don Quixote");
    (*pb1)->pages = 1000;
    (*pb1)->price = 750.0;
    print_book(*pb1);
    free(*pb1);
    free(pb1);
    //7
    struct book* pbb = (Book*)error_checked_malloc(sizeof(Book*)*3);
    strcpy(pbb[0].title, "Don Quixote");
    strcpy(pbb[1].title, "Oblomov");
    strcpy(pbb[2].title, "The Odyssey");
    pbb[0].pages = 1000;
    pbb[0].price = 750.0;
    pbb[1].pages = 400;
    pbb[1].price = 250.0;
    pbb[2].pages = 500;
    pbb[2].price = 500.0;
    for (size_t i=0; i<3; ++i)
        print_book(&pbb[i]);
    free(pbb);
    
}
