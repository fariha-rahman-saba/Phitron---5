#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    int count = 0;
    
    scanf("%s", str);

    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
            count++;
    }

    printf("%d",count);

    return 0;
}
