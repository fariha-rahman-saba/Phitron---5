#include <stdio.h>

int main()
{
    char ch;
    scanf("%c" ,&ch);
    if (('z'-ch)<=25 )
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if (('z'-ch)>=32 && ('z'-ch)<=57)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if (('z'-ch)<=74 && ('z'-ch)>=64)
    {
        printf("IS DIGIT");

    }
    
     
    return 0;
}