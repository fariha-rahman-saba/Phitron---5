#include <stdio.h>

int main()
{
    long long int e, m, b, c1, c2, c3;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e < m && e < b)
    {
        c3 = e;
    }
    else if (m < b && m < e)
        c3 = m;
    else
        c3 = b;

    e = e - c3;
    m = m - c3;
    b = b - c3;

    if (e / 2 < b)
        c1 = e / 2;
    else
        c1 = b;

    printf("%lld", c1+c3);

    return 0;
}