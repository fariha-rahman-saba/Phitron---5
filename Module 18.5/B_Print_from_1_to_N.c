#include <stdio.h>

void num(int n)
{
    if (n==0)
    {
        return;
    }
    else
    {
        printf("%d ",n);
        num(n-1);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    num(n);
    
    return 0;
}