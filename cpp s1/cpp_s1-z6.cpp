#include <iostream>

namespace price
{
    struct Book
    {
        char title[100];
        int pages;
        float price;
    };
    struct Book b = {"Cinderella", 44, 300.0};
    const struct Book& r = b;
    void printBook(const struct Book& r)
    {
        std:: cout << "'" << r.title << "', " << r.pages << ", " << r.price << '\n';
    }
    bool isExpensive( const struct Book& r) 
    {
        if (r.price > 1000.0)
            return true;
        else 
            return false;

    }
}
int main()
{   
    price::printBook(price:: r);
    std:: cout << price:: isExpensive(price:: r);
}