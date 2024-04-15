#include <stdio.h>

int main()
{
    int n,res;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        res = i*n;
        printf("%d * %d = %d\n", n,i,res);
    }
        
    return 0;
}