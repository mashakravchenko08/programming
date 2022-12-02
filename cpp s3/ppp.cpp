#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::endl;


std::string repeat1(std::string s)
{
    std::string result =s+s;
    return result;
}

void repeat2(std::string& s)
{
    s+=s;
}

void repeat3(std::string* ps)
{
    (*ps)=(*ps)+(*ps);
}
std::string* repeat4(std::string s)
{
    std::string* pa = new std::string(s+s);
    return pa;
}


int main()
{
    std::string a = "Cat";
    std::string b = a;
    cout << repeat1(b) << endl;

    std::string c = a;
    std::string &s = c;
    repeat2(s);
    cout << c << endl;

    std::string str = a;
    std::string* ps = &str;
    repeat3(ps);
    cout << str << endl;

    cout << repeat4(a) << endl;
    cout << (*repeat4(a)) << endl;
}