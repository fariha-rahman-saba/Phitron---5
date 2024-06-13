#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            b[i]=a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (b[i]<b[j])
                {
                    int tmp = b[i];
                    b[i]=b[j];
                    b[j]=tmp;
                }

            }

        }
        

        for (int i = 0; i < n; i++)
        {
            c[i]=a[i]-b[i];
            if (c[i]<0)
            {
                c[i]=-(a[i]-b[i]);
            }
            
            
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
        


    }


    return 0;
}
