#include <stdio.h>
#include <string.h>
void set_characters(char* begin, char* end, char c)
{   
    int n = (end - begin)/sizeof(char);
    memset(begin, c, n);
}
int main()
{
    char s[] = "Sapere Aude";
    set_characters(&s[2], &s[8], 'b');
    printf("%s\n", s); // Должно напечатать Sabbbbbbude
    set_characters(s, &s[4], 'a');
    printf("%s\n", s); // Должно напечатать aaaabbbbude
}
