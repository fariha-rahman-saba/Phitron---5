#include <stdio.h>
#include <string.h>

int main()
{
    int n, t ;
    scanf("%d", &t);
    while (t--)
    {
        int p = 0, tg = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'P')
            {
                p++;
            }
            else
                tg++;
        }
        if (p > tg)
        {
            printf("Pathaan\n");
        }
        else if (p < tg) printf("Tiger\n");
        else printf("Draw\n");
        
    }

    return 0;
}