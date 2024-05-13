#include <stdio.h>
#include <string.h>

int is_palindrome(char str[1000], int len)
{
    int flag = 1;
    for (int i=0, j = len-1; i<=len/2, j >= len/2; i++,j--)
    {
        if (str[i]==str[j])
        {
            flag=1;
        }
        else {
            flag=0;

            break;
        }
        
    }
    if (flag==0)
    {
        return 0;
    }
    else return 1;
    
    
}

int main()
{
    char str[1000];
    scanf("%s", str);

    int len = strlen(str);

    int res = is_palindrome(str,len);


    if(res) 
    {
        printf("Palindrome");
    }
    else printf("Not Palindrome");
    
    return 0;
}