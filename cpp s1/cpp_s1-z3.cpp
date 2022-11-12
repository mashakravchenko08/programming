#include <iostream>
namespace myspace
{   
    int n;
    int& r = n;
    void cubeR(int& r)
    {   
        int c = n * n * n;
        std:: cout << c;
    }
}
int main()
{
    std:: cout << "Enter the number" << '\n';
    std:: cin >> myspace::n;
    myspace::cubeR(myspace::r);
}