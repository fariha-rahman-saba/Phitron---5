#include <stdio.h>

int main()
{
    int n,avg,a,b,d,e;
    scanf("%d", &n);
    avg = n/4;
    a = avg-3;
    b = avg-1;
    d=avg+1;
    e=avg+3;
    printf("%d %d %d %d", a,b, d, e);

    return 0;
}
