#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int x = 1; x <= n - i; x++) {
            printf(" ");
        }

        // Printing characters
        if (i % 2 == 1) {
            if (i == 1) {
                printf("#\n");
            } else {
                printf("#");
                for (int j = 1; j <= i - 2; j++) {
                    printf("-");
                }
                printf("#\n");
            }
        } else {
            for (int m = 1; m <= i; m++) {
                printf("-");
            }
            printf("\n");
        }
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Printing spaces
        for (int x = 1; x <= n - i; x++) {
            printf(" ");
        }

        // Printing characters
        if (i % 2 == 1) {
            printf("#");
            for (int j = 1; j <= i - 2; j++) {
                printf("-");
            }
            printf("#\n");
        } else {
            for (int m = 1; m <= i; m++) {
                printf("-");
            }
            printf("\n");
        }
    }

    return 0;
}
