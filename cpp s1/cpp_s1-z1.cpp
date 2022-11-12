#include <iostream>
namespace myspace
{
    char str[] = "My space";
    char* s = &str[0];
    void printNTimes(const char* str, int n = 10)
    {
        for (int i=1; i<=10; ++i)
        {
            for (int j=0; j<8; ++j)
                std::cout << *(s+j);
            std::cout << '\n';
        }
    }
}
int main()
{
    myspace::printNTimes(myspace::s, 10);
}