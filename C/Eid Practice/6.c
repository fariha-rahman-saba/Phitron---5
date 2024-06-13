#include <stdio.h>

int main()
{
    int n,avg,a,b,d,e;
    scanf("%d", &n);
    avg = n/5;
    a = avg-4;
    b = avg-2;
    d=avg+2;
    e=avg+4;
    printf("%d %d %d %d %d", a,b, avg, d, e);

    return 0;
}
