#include <stdio.h>

int main()
{
    int n,m,sc,flag=0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    scanf("%d", &sc);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (sc==arr[i][j])
            {
                flag=1;
            }
            
        }
        
    }
    if (flag==1)
    {   
        printf("will not take number");
    }
    else printf("will take number");

    
    return 0;
}