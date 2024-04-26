#include <stdio.h>

int main()
{
    int m1, m2, d, t;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        int sum = m1 + m2;

        int fewer_days = d * m1 / sum;

        printf("%d\n", d-fewer_days);
    }

    return 0;
}
