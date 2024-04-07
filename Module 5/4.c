#include <stdio.h>

int main()
{
    int a, d;
    scanf("%d", &a);
    d = a/1000;
    if (d%2==0)
    {
        printf("EVEN");
    }
    
    else
    {
        printf("ODD");
    }
     
    return 0;
}