#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    
    scanf("%s", str);

    int counts[26] = {0};
    
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            printf("%c - %d\n", 'a' + i, counts[i]);
        }
    }

    return 0;
}
