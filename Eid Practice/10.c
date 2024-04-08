#include <stdio.h>

int main()
{
    int d,s;
    scanf("%d", &d);
    s = d/3;
    if (d%3==0)
    {
        printf("%d", s);
    }
    else{
        printf("%d",s+1);
    }

    return 0;
}
