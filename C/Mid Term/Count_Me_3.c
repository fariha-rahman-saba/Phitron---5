#include <stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    int t;
    int capCount = 0, smallCount = 0, digCount = 0;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", str);
        int len = strlen(str);
        for (int i = 0; i<len; i++)
        {
            char ch = str[i];
            if (ch >= 'A' && ch <= 'Z')
            {
                capCount++;
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                smallCount++;
            }
            else if (ch >= '0' && ch <= '9')
            {
                digCount++;
            }
        }

        printf("%d %d %d\n", capCount, smallCount, digCount);
        capCount = 0, smallCount = 0, digCount = 0;
    }

    return 0;
}
