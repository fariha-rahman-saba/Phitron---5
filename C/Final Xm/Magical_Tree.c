#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    // printf("%d", n);
    int m = n/2;
    for (i = 1; i <=6+m; i++)
    {
        for (int k = 1;k<=6-i+m ; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for (int  p= 1; p <= 5; p++)
    {
        for (int q = 1; q <= 5; q++)
        {
            printf(" ");
        }
        for (int r = 1; r <= n; r++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    
    return 0;
}