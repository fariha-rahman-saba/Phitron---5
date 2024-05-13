#include <stdio.h>
#include <string.h>

int main()
{
    long long int m;
    long long int t,a,b,c;
    scanf("%lld", &t);

    while (t--)
    {
        scanf("%lld %lld %lld %lld", &m, &a,&b,&c);
        long long int prod = a*b*c;

        if (prod == 0) {
            printf("-1\n");
            continue;
        }

        long long int res = m/prod;
        long long int var = res*a*b*c;
        if (var==m) 
        {
            printf("%lld\n", res);
        }
        else 
        {
            printf("-1\n");
        }
        
    }

    return 0;
}