#include <stdio.h>

int main()
{
    int n, max=-999,val;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if(val>max) max=val;
    }
    
    printf("%d", max);
    
    return 0;
}