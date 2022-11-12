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
    float x = 44.9;
    struct Book& r = b;
    void printBook(struct Book& r)
    {
        std:: cout << "'" << r.title << "', " << r.pages << ", " << r.price << '\n';
    }
    void  addPrice(struct Book& r, float x) 
    {
        r.price = r.price + x;
    }
}
int main()
{   
    std:: cout << "old price"<<'\n';
    price::printBook(price:: r);
    price::addPrice(price:: r, price:: x);
    std:: cout << "new price"<<'\n';
    price::printBook(price:: r);
}