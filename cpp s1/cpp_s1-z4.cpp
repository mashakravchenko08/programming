#include <iostream>
#include <cstring>
namespace myspace
{   
    char str[15] = "Hello 1234&&*";
    char* s = &str[0];
    int l = 0;
    int& numLetters = l;
    int d = 0;
    int& numDigits = d;
    int o = 0;
    int& numOther = o;
    void countLetters(const char* str, int& numLetters, int& numDigits, int& numOther)
    {
        for (int i = 0; i<13; ++i)
        {
            if ((('A' <= *s) && (*s <= 'Z')) || (('a'<= *s) && (*s<='z')))
                numLetters += 1;
            else if (('0'<= *s) && (*s <='9'))
                numDigits += 1;
            else
                numOther += 1;
            s += 1;

        }
        std:: cout << "Letters: " << numLetters << ", " << "Digits: " << numDigits << ", " << "Other: " << numOther << '\n';
    }
}
int main()
{   
    std:: cout << "My string is  'Hello 1234&&*' " << '\n';
    myspace::countLetters(myspace:: s, myspace:: l, myspace:: d, myspace:: o);
}