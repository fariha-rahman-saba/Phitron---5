#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d", &a, &b);
    c=a/b;
    d=a-c*b;
    printf("%d %d", c, d);
    
    return 0;
}