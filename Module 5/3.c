#include <stdio.h>

int main()
{
    char ch,t;
    scanf("%c" ,&ch);
    if (('a'-ch)<=32 && ('a'-ch)>0)
    {
        int t = ch+32;
        printf("%c", t);
    }
    else if (('a'-ch)<=0)
    {
        int t = ch-32;
        printf("%c", t);
    }
     
    return 0;
}