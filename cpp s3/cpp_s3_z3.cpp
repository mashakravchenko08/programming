#include <iostream>
#include <string>
#include <cctype>
#include <string_view>
using std::cout;
using std::endl;


std::string operator*(std::string s, int n)
{
    std::string str = s;
    for (size_t i=1; i<n; ++i)
    {
        str+=s;
    }
    return str;
}

int main()
{
    std::string a = "Cat";
    int n = 5;
    std::string d = a * n;
    cout << d << endl;
}