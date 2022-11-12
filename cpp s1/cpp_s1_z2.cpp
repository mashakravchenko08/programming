#include <iostream>
namespace myspace
{
    void cubeV()
    {   
        int n;
        std:: cout << "Enter the number" << '\n';
        std:: cin >> n;
        int c = n * n * n;
        std:: cout << c;
    }
}
int main()
{
    myspace::cubeV();
}