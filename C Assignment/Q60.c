#include <stdio.h>

int main() {
    int n = 5;

    // Part 1: Top triangle
    for (int i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\n", i, n - i + 1, i);
    }

    // Part 2: Middle line
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    for (int i = 2; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

   
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - 1; j++) {
            printf("\t");
        }
        printf("%d\n", i);
    }

    return 0;
}