#include <stdio.h>

void love(int n)
{
    if (n==0)
    {
        return;
    }
    else
    {
        printf("I love Recursion\n");
        love(n-1);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    love(n);
    
    return 0;
}