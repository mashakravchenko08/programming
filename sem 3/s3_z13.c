#include <stdio.h>
void alice(int);
void bob(int);
void alice(int a)
{
    a = (a*3)+1;
    printf("Alice: %i\n", a);
    bob(a);
}
void bob(int b)
{
    if (b == 1)
    {
        return;
    }
    else if (!(b % 2))
    {
       
            b = b / 2;
            printf("Bob: %i\n", b);
            bob(b);
    
        
    }
    else
        alice(b);
    
}
int main()
{
int a;
scanf("%i", &a);
alice(a);
}
