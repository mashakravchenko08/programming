#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::endl;


void changeregistr(std::string& a)
{
    if (('A'<= a[0])&&(a[0]<='Z'))
        a[0] = std::tolower(a[0]);
    else if (('a'<=a[0])&&(a[0]<='z'))
        a[0] = std::toupper(a[0]);
    else
        a="";
}



int main()
{
    std::string a = "Cat";
    changeregistr(a);
    cout << a << endl;
    std::string b = "cat";
    changeregistr(b);
    cout << b << endl;
    std::string c = "";
    cout << c << endl;
    }